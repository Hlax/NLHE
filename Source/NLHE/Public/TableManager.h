// TableManager.h
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AIPlayer.h"
#include "TableManager.generated.h"

UCLASS()
class NLHE_API ATableManager : public AActor {
    GENERATED_BODY()

public:
    ATableManager();

    // Player and seat management
    void AssignPlayerToSeat(int32 Seat, AAIPlayer* Player);
    bool IsPlayerActive(int32 Seat) const;
    void SetActivePlayer(int32 Seat);
    AAIPlayer* GetActivePlayer() const;

    // Dealer button management
    void AssignDealerButton();
    void MoveDealerButton();

    // Player turn management
    int32 GetNextActivePlayer(int32 CurrentSeat) const;

    // Action validation
    void ValidateAndProcessAction(EPokerAction Action, int32 Amount);

    // Getters for active players and dealer
    TArray<int32> GetActiveSeats() const;
    int32 GetCurrentDealerSeat() const;

private:
    TMap<int32, AAIPlayer*> Seats;
    int32 CurrentDealerSeat;
    int32 CurrentActiveSeat;
};