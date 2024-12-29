// TableManager.cpp
#include "TableManager.h"
#include "Kismet/KismetMathLibrary.h"

ATableManager::ATableManager() {
    PrimaryActorTick.bCanEverTick = false;
    CurrentDealerSeat = -1;
    CurrentActiveSeat = -1;
}

void ATableManager::AssignPlayerToSeat(int32 Seat, AAIPlayer* Player) {
    if (!Seats.Contains(Seat)) {
        Seats.Add(Seat, Player);
        UE_LOG(LogTemp, Log, TEXT("Player assigned to Seat %d"), Seat);
    }
}

bool ATableManager::IsPlayerActive(int32 Seat) const {
    if (Seats.Contains(Seat)) {
        AAIPlayer* Player = Seats[Seat];
        return Player != nullptr; // Add more conditions as needed
    }
    return false;
}

void ATableManager::SetActivePlayer(int32 Seat) {
    if (Seats.Contains(Seat)) {
        CurrentActiveSeat = Seat;
        UE_LOG(LogTemp, Log, TEXT("Active player set to Seat %d"), Seat);
    }
}

AAIPlayer* ATableManager::GetActivePlayer() const {
    if (Seats.Contains(CurrentActiveSeat)) {
        return Seats[CurrentActiveSeat];
    }
    return nullptr;
}

void ATableManager::AssignDealerButton() {
    TArray<int32> SeatKeys;
    Seats.GetKeys(SeatKeys);

    if (SeatKeys.Num() > 0) {
        CurrentDealerSeat = SeatKeys[UKismetMathLibrary::RandomInteger(SeatKeys.Num())];
        UE_LOG(LogTemp, Log, TEXT("Dealer button assigned to Seat %d"), CurrentDealerSeat);
    }
}

void ATableManager::MoveDealerButton() {
    TArray<int32> SeatKeys;
    Seats.GetKeys(SeatKeys);

    if (SeatKeys.Num() > 0 && CurrentDealerSeat != -1) {
        int32 CurrentIndex = SeatKeys.IndexOfByKey(CurrentDealerSeat);
        int32 NextIndex = (CurrentIndex + 1) % SeatKeys.Num();
        CurrentDealerSeat = SeatKeys[NextIndex];

        UE_LOG(LogTemp, Log, TEXT("Dealer button moved to Seat %d"), CurrentDealerSeat);
    }
}

int32 ATableManager::GetNextActivePlayer(int32 CurrentSeat) const {
    TArray<int32> SeatKeys;
    Seats.GetKeys(SeatKeys);
    SeatKeys.Sort(); // Ensure seats are processed in order

    int32 StartIndex = SeatKeys.IndexOfByKey(CurrentSeat);
    for (int32 i = 1; i < SeatKeys.Num(); ++i) {
        int32 NextIndex = (StartIndex + i) % SeatKeys.Num();
        if (IsPlayerActive(SeatKeys[NextIndex])) {
            return SeatKeys[NextIndex];
        }
    }
    return -1; // No active players found
}

void ATableManager::ValidateAndProcessAction(EPokerAction Action, int32 Amount) {
    if (GetActivePlayer() != nullptr) {
        UE_LOG(LogTemp, Log, TEXT("Validating action for Seat %d: Action = %d, Amount = %d"), CurrentActiveSeat, (int32)Action, Amount);

        // For now, log the action; validation will go into the BettingManager
        switch (Action) {
        case EPokerAction::Fold:
            UE_LOG(LogTemp, Log, TEXT("Player %d folds."), CurrentActiveSeat);
            break;
        case EPokerAction::Check:
            UE_LOG(LogTemp, Log, TEXT("Player %d checks."), CurrentActiveSeat);
            break;
        case EPokerAction::Bet:
            UE_LOG(LogTemp, Log, TEXT("Player %d bets %d."), CurrentActiveSeat, Amount);
            break;
        default:
            UE_LOG(LogTemp, Warning, TEXT("Unsupported action by Seat %d."), CurrentActiveSeat);
            break;
        }
    }
}

TArray<int32> ATableManager::GetActiveSeats() const {
    TArray<int32> ActiveSeats;
    for (const auto& Seat : Seats) {
        if (IsPlayerActive(Seat.Key)) {
            ActiveSeats.Add(Seat.Key);
        }
    }
    return ActiveSeats;
}

int32 ATableManager::GetCurrentDealerSeat() const {
    return CurrentDealerSeat;
}
