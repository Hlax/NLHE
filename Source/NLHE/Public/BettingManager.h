// BettingManager.h
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ActionInterface.h"
#include "BettingManager.generated.h"

UCLASS()
class NLHE_API ABettingManager : public AActor {
    GENERATED_BODY()

public:
    ABettingManager();

    void InitializeBettingRound(const TArray<int32>& ActiveSeats, int32 DealerSeat);
    bool ValidateAction(int32 Seat, EPokerAction Action, int32 Amount) const;
    void ProcessAction(int32 Seat, EPokerAction Action, int32 Amount);
    void AdvanceToNextPlayer();
    bool IsBettingRoundComplete() const;
    int32 GetNextPlayerToAct(int32 CurrentSeat) const;
    void NotifyGamePhaseComplete();
    int32 GetCurrentBet() const;
    int32 GetMainPot() const;

private:
    int32 CurrentBet;
    TMap<int32, int32> PlayerContributions; // Seat -> Contribution
    TArray<int32> ActiveSeats;
    int32 DealerSeat;
    int32 CurrentActiveSeat;
    bool ActionInProgress;
};