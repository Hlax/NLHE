// GameManager.cpp
#include "GameManager.h"
#include "AIPlayer.h"
#include "Engine/World.h"
#include "Kismet/GameplayStatics.h"

AGameManager::AGameManager()
    : CurrentPhase(EGamePhase::WaitingToStart)
    , HandCount(0)
{
}

void AGameManager::BeginPlay()
{
    Super::BeginPlay();

    // Find or spawn required managers
    TableManager = Cast<ATableManager>(UGameplayStatics::GetActorOfClass(GetWorld(), ATableManager::StaticClass()));
    Dealer = Cast<ADealer>(UGameplayStatics::GetActorOfClass(GetWorld(), ADealer::StaticClass()));
    BettingManager = Cast<ABettingManager>(UGameplayStatics::GetActorOfClass(GetWorld(), ABettingManager::StaticClass()));

    if (!TableManager || !Dealer || !BettingManager)
    {
        UE_LOG(LogTemp, Error, TEXT("Required managers not found in level!"));
        return;
    }

    // Initialize components
    TableManager->InitializeTable(6);  // 6-max table
    BettingManager->InitializePlayerBets(6);

    // Start the game flow
    AdvancePhase();
}

FPokerActionState AGameManager::CreateCurrentActionState() const
{
    FPokerActionState State;
    State.Phase = CurrentPhase;
    State.CurrentBet = BettingManager->GetCurrentBet();
    State.MainPot = BettingManager->GetMainPot();
    // Add community cards when available
    State.ActionOn = TableManager->GetNextActivePlayer();
    return State;
}

void AGameManager::ProcessBettingRound()
{
    UE_LOG(LogTemp, Log, TEXT("=== Starting Betting Round - Phase: %s ==="),
        *UEnum::GetValueAsString(CurrentPhase));

    UE_LOG(LogTemp, Log, TEXT("Initial Pot: %d, Current Bet: %d"),
        BettingManager->GetMainPot(),
        BettingManager->GetCurrentBet());

    int32 CurrentPlayer = TableManager->GetNextActivePlayer();
    int32 RoundCount = 0;

    while (CurrentPlayer != -1)
    {
        UE_LOG(LogTemp, Log, TEXT("--- Betting Round %d, Player %d ---"),
            RoundCount + 1,
            CurrentPlayer);

        HandlePlayerAction(CurrentPlayer);

        UE_LOG(LogTemp, Log, TEXT("After Action - Pot: %d, Current Bet: %d"),
            BettingManager->GetMainPot(),
            BettingManager->GetCurrentBet());

        CurrentPlayer = TableManager->GetNextActivePlayer();
        RoundCount++;
    }

    UE_LOG(LogTemp, Log, TEXT("=== Ending Betting Round - Final Pot: %d ==="),
        BettingManager->GetMainPot());
}

void AGameManager::HandlePlayerAction(int32 PlayerIndex)
{
    FSeat Seat = TableManager->GetSeat(PlayerIndex);
    if (!Seat.Player)
    {
        UE_LOG(LogTemp, Warning, TEXT("No player in seat %d"), PlayerIndex);
        return;
    }

    FPokerActionState CurrentState = CreateCurrentActionState();

    UE_LOG(LogTemp, Log, TEXT("Handle Action - Seat: %d, Current Bet: %d, Pot: %d"),
        PlayerIndex,
        CurrentState.CurrentBet,
        CurrentState.MainPot);

    EPokerAction Action = Seat.Player->DecideAction(CurrentState);

    // Calculate bet amount based on action
    int32 BetAmount = 0;
    if (Action == EPokerAction::Call)
    {
        BetAmount = CurrentState.CurrentBet;
    }

    // Process the action through betting manager
    if (!BettingManager->ProcessAction(PlayerIndex, Action, BetAmount))
    {
        UE_LOG(LogTemp, Error, TEXT("Failed to process action for player %d"), PlayerIndex);
    }
    else
    {
        UE_LOG(LogTemp, Log, TEXT("Action processed - Player: %d, Action: %s, Amount: %d"),
            PlayerIndex,
            *UEnum::GetValueAsString(Action),
            BetAmount);
    }
}

void AGameManager::OnWaitingToStart()
{
    if (TableManager && TableManager->GetSeatCount() == 6)
    {
        UE_LOG(LogTemp, Log, TEXT("All seats are filled. Starting game..."));
        CurrentPhase = EGamePhase::Deal;
        AdvancePhase();
    }
}

void AGameManager::OnDeal()
{
    Dealer->ShuffleDeck();
    TableManager->MoveDealerButton();
    BettingManager->CollectBlinds();
    Dealer->DealHoleCards(6, 2);
    CurrentPhase = EGamePhase::Preflop;
    AdvancePhase();
}

void AGameManager::OnPreflop()
{
    ProcessBettingRound();
    BettingManager->ResetForNewStreet();
    CurrentPhase = EGamePhase::Flop;
    AdvancePhase();
}

void AGameManager::OnFlop()
{
    Dealer->DealFlop();
    ProcessBettingRound();
    BettingManager->ResetForNewStreet();
    CurrentPhase = EGamePhase::Turn;
    AdvancePhase();
}

void AGameManager::OnTurn()
{
    Dealer->DealTurn();
    ProcessBettingRound();
    BettingManager->ResetForNewStreet();
    CurrentPhase = EGamePhase::River;
    AdvancePhase();
}

void AGameManager::OnRiver()
{
    Dealer->DealRiver();
    ProcessBettingRound();
    BettingManager->ResetForNewStreet();
    CurrentPhase = EGamePhase::Showdown;
    AdvancePhase();
}

void AGameManager::OnShowdown()
{
    UE_LOG(LogTemp, Log, TEXT("Showdown"));
    CurrentPhase = EGamePhase::EndHand;
    AdvancePhase();
}

void AGameManager::OnEndHand()
{
    UE_LOG(LogTemp, Log, TEXT("Distribute Pot"));
    Dealer->ResetDeck();

    if (++HandCount < 3)
    {
        CurrentPhase = EGamePhase::Deal;
        AdvancePhase();
    }
    else
    {
        UE_LOG(LogTemp, Log, TEXT("Game Over. Max hands played."));
    }
}

void AGameManager::AdvancePhase()
{
    LogPhase();

    switch (CurrentPhase)
    {
    case EGamePhase::WaitingToStart: OnWaitingToStart(); break;
    case EGamePhase::Deal:          OnDeal(); break;
    case EGamePhase::Preflop:       OnPreflop(); break;
    case EGamePhase::Flop:          OnFlop(); break;
    case EGamePhase::Turn:          OnTurn(); break;
    case EGamePhase::River:         OnRiver(); break;
    case EGamePhase::Showdown:      OnShowdown(); break;
    case EGamePhase::EndHand:       OnEndHand(); break;
    }
}

void AGameManager::LogPhase() const
{
    UE_LOG(LogTemp, Log, TEXT("Current Phase: %s"), *UEnum::GetValueAsString(CurrentPhase));
}