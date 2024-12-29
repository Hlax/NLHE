// BettingManager.cpp
#include "BettingManager.h"
#include "Kismet/KismetMathLibrary.h"

ABettingManager::ABettingManager() {
    PrimaryActorTick.bCanEverTick = false;
    CurrentBet = 0;
    CurrentActiveSeat = -1;
    ActionInProgress = false;
}

void ABettingManager::InitializeBettingRound(const TArray<int32>& ActiveSeatsInput, int32 Dealer) {
    ActiveSeats = ActiveSeatsInput;
    DealerSeat = Dealer;
    CurrentBet = 0;
    PlayerContributions.Empty();
    for (int32 Seat : ActiveSeats) {
        PlayerContributions.Add(Seat, 0);
    }
    CurrentActiveSeat = GetNextPlayerToAct(DealerSeat);
    ActionInProgress = true;

    UE_LOG(LogTemp, Log, TEXT("Betting round initialized. Dealer: %d, First to act: %d"), DealerSeat, CurrentActiveSeat);
}

bool ABettingManager::ValidateAction(int32 Seat, EPokerAction Action, int32 Amount) const {
    if (Seat != CurrentActiveSeat) {
        UE_LOG(LogTemp, Warning, TEXT("Invalid action: Seat %d, not their turn."), Seat);
        return false;
    }

    switch (Action) {
    case EPokerAction::Check:
        return Amount == 0 && PlayerContributions[Seat] == CurrentBet;
    case EPokerAction::Bet:
    case EPokerAction::Raise:
        return Amount >= (CurrentBet * 2) && Amount > CurrentBet;
    case EPokerAction::Call:
        return Amount == (CurrentBet - PlayerContributions[Seat]);
    case EPokerAction::Fold:
        return true;
    default:
        return false;
    }
}

void ABettingManager::ProcessAction(int32 Seat, EPokerAction Action, int32 Amount) {
    if (!ValidateAction(Seat, Action, Amount)) {
        UE_LOG(LogTemp, Warning, TEXT("Action by Seat %d is invalid."), Seat);
        return;
    }

    switch (Action) {
    case EPokerAction::Fold:
        ActiveSeats.Remove(Seat);
        UE_LOG(LogTemp, Log, TEXT("Seat %d folds."), Seat);
        break;
    case EPokerAction::Check:
        UE_LOG(LogTemp, Log, TEXT("Seat %d checks."), Seat);
        break;
    case EPokerAction::Bet:
    case EPokerAction::Raise:
        CurrentBet = Amount;
        PlayerContributions[Seat] += Amount;
        UE_LOG(LogTemp, Log, TEXT("Seat %d raises to %d."), Seat, Amount);
        break;
    case EPokerAction::Call:
        PlayerContributions[Seat] += Amount;
        UE_LOG(LogTemp, Log, TEXT("Seat %d calls for %d."), Seat, Amount);
        break;
    }

    AdvanceToNextPlayer();
}

void ABettingManager::AdvanceToNextPlayer() {
    if (IsBettingRoundComplete()) {
        NotifyGamePhaseComplete();
        return;
    }

    CurrentActiveSeat = GetNextPlayerToAct(CurrentActiveSeat);
    if (CurrentActiveSeat == -1) {
        ActionInProgress = false;
        NotifyGamePhaseComplete();
    }
    else {
        UE_LOG(LogTemp, Log, TEXT("Next player to act: Seat %d"), CurrentActiveSeat);
    }
}

bool ABettingManager::IsBettingRoundComplete() const {
    for (int32 Seat : ActiveSeats) {
        if (PlayerContributions[Seat] != CurrentBet && Seat != CurrentActiveSeat) {
            return false;
        }
    }
    return true;
}

int32 ABettingManager::GetNextPlayerToAct(int32 CurrentSeat) const {
    int32 StartIndex = ActiveSeats.IndexOfByKey(CurrentSeat);
    for (int32 i = 1; i < ActiveSeats.Num(); ++i) {
        int32 NextIndex = (StartIndex + i) % ActiveSeats.Num();
        if (ActiveSeats.IsValidIndex(NextIndex)) {
            return ActiveSeats[NextIndex];
        }
    }
    return -1; // No more active players
}

void ABettingManager::NotifyGamePhaseComplete() {
    UE_LOG(LogTemp, Log, TEXT("Betting round complete. Proceed to next phase."));
    // Notify GameManager to advance the game phase
}

int32 ABettingManager::GetCurrentBet() const {
    return CurrentBet;
}

int32 ABettingManager::GetMainPot() const {
    int32 MainPot = 0;
    for (const auto& Contribution : PlayerContributions) {
        MainPot += Contribution.Value;
    }
    return MainPot;
}