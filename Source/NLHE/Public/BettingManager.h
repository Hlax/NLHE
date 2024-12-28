// BettingManager.h
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PokerTerms.h"
#include "BettingManager.generated.h"

UCLASS()
class NLHE_API ABettingManager : public AActor
{
    GENERATED_BODY()

public:
    ABettingManager();

    bool ProcessAction(int32 PlayerIndex, EPokerAction Action, int32 Amount = 0);
    void CollectBlinds();
    void ResetForNewStreet();

    // Getters
    int32 GetMinimumRaise() const { return MinRaise; }
    int32 GetCurrentBet() const { return CurrentBet; }
    int32 GetMainPot() const { return MainPot; }
    TArray<EPokerAction> GetValidActions(int32 PlayerIndex) const;

    // Setup
    void InitializePlayerBets(int32 NumPlayers);

private:
    UPROPERTY()
    int32 CurrentBet;

    UPROPERTY()
    int32 MinRaise;

    UPROPERTY()
    int32 MainPot;

    UPROPERTY()
    TArray<FPot> SidePots;

    UPROPERTY()
    TArray<FPlayerBets> PlayerBets;

    static constexpr int32 DEFAULT_SMALL_BLIND = 50;
    static constexpr int32 DEFAULT_BIG_BLIND = 100;
};