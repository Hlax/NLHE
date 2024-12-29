// GameManager.cpp
#include "GameManager.h"
#include "Engine/World.h"
#include "Kismet/GameplayStatics.h"

AGameManager::AGameManager() {
    CurrentPhase = EGamePhase::WaitingToStart;
}

void AGameManager::BeginPlay() {
    Super::BeginPlay();

    // Get references to TableManager, BettingManager, and Dealer
    TableManager = Cast<ATableManager>(UGameplayStatics::GetActorOfClass(GetWorld(), ATableManager::StaticClass()));
    BettingManager = Cast<ABettingManager>(UGameplayStatics::GetActorOfClass(GetWorld(), ABettingManager::StaticClass()));
    Dealer = Cast<ADealer>(UGameplayStatics::GetActorOfClass(GetWorld(), ADealer::StaticClass()));

    if (!TableManager || !BettingManager || !Dealer) {
        UE_LOG(LogTemp, Error, TEXT("TableManager, BettingManager, or Dealer not found in the world!"));
        return;
    }

    // Initialize the game
    StartNewHand();
}

void AGameManager::StartNewHand() {
    if (!TableManager || !BettingManager || !Dealer) {
        UE_LOG(LogTemp, Error, TEXT("Cannot start a new hand without necessary components."));
        return;
    }

    // Assign the dealer button
    TableManager->AssignDealerButton();

    // Assign blinds
    int32 SmallBlindSeat = TableManager->GetNextActivePlayer(TableManager->GetCurrentDealerSeat());
    int32 BigBlindSeat = TableManager->GetNextActivePlayer(SmallBlindSeat);

    UE_LOG(LogTemp, Log, TEXT("Small Blind: Seat %d, Big Blind: Seat %d"), SmallBlindSeat, BigBlindSeat);

    // Shuffle cards
    Dealer->ShuffleDeck();

    // Deal hole cards
    TArray<int32> ActiveSeats = TableManager->GetActiveSeats();
    Dealer->DealHoleCards(ActiveSeats, 2);

    // Initialize the betting round
    BettingManager->InitializeBettingRound(ActiveSeats, TableManager->GetCurrentDealerSeat());

    // Move to the Pre-Flop phase
    CurrentPhase = EGamePhase::PreFlop;
    AdvanceGamePhase();
}

void AGameManager::AdvanceGamePhase() {
    switch (CurrentPhase) {
    case EGamePhase::PreFlop:
        UE_LOG(LogTemp, Log, TEXT("Starting Pre-Flop betting..."));
        // The BettingManager handles the betting logic for this phase
        break;

    case EGamePhase::Flop:
        UE_LOG(LogTemp, Log, TEXT("Revealing Flop..."));
        Dealer->DealFlop();
        BettingManager->InitializeBettingRound(TableManager->GetActiveSeats(), TableManager->GetCurrentDealerSeat());
        CurrentPhase = EGamePhase::Turn;
        break;

    case EGamePhase::Turn:
        UE_LOG(LogTemp, Log, TEXT("Revealing Turn..."));
        Dealer->DealTurn();
        BettingManager->InitializeBettingRound(TableManager->GetActiveSeats(), TableManager->GetCurrentDealerSeat());
        CurrentPhase = EGamePhase::River;
        break;

    case EGamePhase::River:
        UE_LOG(LogTemp, Log, TEXT("Revealing River..."));
        Dealer->DealRiver();
        BettingManager->InitializeBettingRound(TableManager->GetActiveSeats(), TableManager->GetCurrentDealerSeat());
        CurrentPhase = EGamePhase::Showdown;
        break;

    case EGamePhase::Showdown:
        UE_LOG(LogTemp, Log, TEXT("Showdown phase... Determining winner."));
        StartNewHand();
        break;

    default:
        break;
    }
}
