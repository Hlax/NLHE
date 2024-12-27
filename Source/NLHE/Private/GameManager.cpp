#include "GameManager.h"
#include "TableManager.h"
#include "Dealer.h"
#include "Engine/World.h"
#include "Kismet/GameplayStatics.h"

AGameManager::AGameManager()
    : CurrentPhase(EGamePhase::WaitingToStart), HandCount(0)
{
}

void AGameManager::BeginPlay()
{
    Super::BeginPlay();

    // Find TableManager and Dealer in the level
    TableManager = Cast<ATableManager>(UGameplayStatics::GetActorOfClass(GetWorld(), ATableManager::StaticClass()));
    Dealer = Cast<ADealer>(UGameplayStatics::GetActorOfClass(GetWorld(), ADealer::StaticClass()));

    if (!TableManager || !Dealer)
    {
        UE_LOG(LogTemp, Error, TEXT("TableManager or Dealer not found in level!"));
        return;
    }

    // Start the game flow
    AdvancePhase();
}

void AGameManager::AdvancePhase()
{
    LogPhase();

    switch (CurrentPhase)
    {
    case EGamePhase::WaitingToStart:
        OnWaitingToStart();
        break;
    case EGamePhase::Deal:
        OnDeal();
        break;
    case EGamePhase::Preflop:
        OnPreflop();
        break;
    case EGamePhase::Flop:
        OnFlop();
        break;
    case EGamePhase::Turn:
        OnTurn();
        break;
    case EGamePhase::River:
        OnRiver();
        break;
    case EGamePhase::Showdown:
        OnShowdown();
        break;
    case EGamePhase::EndHand:
        OnEndHand();
        break;
    default:
        break;
    }
}

void AGameManager::LogPhase() const
{
    UE_LOG(LogTemp, Log, TEXT("Current Phase: %s"), *UEnum::GetValueAsString(CurrentPhase));
}

void AGameManager::OnWaitingToStart()
{
    // Check seat count
    if (TableManager && TableManager->GetSeatCount() == 6)
    {
        UE_LOG(LogTemp, Log, TEXT("All seats are filled. Starting game..."));
        CurrentPhase = EGamePhase::Deal;
        AdvancePhase();
    }
    else
    {
        UE_LOG(LogTemp, Log, TEXT("Waiting for seats to be filled."));
    }
}

void AGameManager::OnDeal()
{
    Dealer->DealHoleCards(6, 2); // 6 seats, 2 cards each
    CurrentPhase = EGamePhase::Preflop;
    AdvancePhase();
}

void AGameManager::OnPreflop()
{
    UE_LOG(LogTemp, Log, TEXT("Pre-Flop Betting"));
    CurrentPhase = EGamePhase::Flop;
    AdvancePhase();
}

void AGameManager::OnFlop()
{
    if (Dealer)
    {
        Dealer->DealFlop();
        CurrentPhase = EGamePhase::Turn;
        AdvancePhase();
    }
}

void AGameManager::OnTurn()
{
    if (Dealer)
    {
        Dealer->DealTurn();
        CurrentPhase = EGamePhase::River;
        AdvancePhase();
    }
}

void AGameManager::OnRiver()
{
    if (Dealer)
    {
        Dealer->DealRiver();
        CurrentPhase = EGamePhase::Showdown;
        AdvancePhase();
    }
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
    Dealer->ResetDeck(); // Reset the deck at the end of the hand

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
