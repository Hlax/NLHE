#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "PokerTerms.h"
#include "BettingManager.h"
#include "TableManager.h"
#include "Dealer.h"
#include "GameManager.generated.h"

UCLASS()
class NLHE_API AGameManager : public AGameModeBase
{
    GENERATED_BODY()

public:
    AGameManager();

protected:
    virtual void BeginPlay() override;

private:
    UPROPERTY()
    EGamePhase CurrentPhase;

    UPROPERTY()
    int32 HandCount;

    UPROPERTY()
    ATableManager* TableManager;

    UPROPERTY()
    ADealer* Dealer;

    UPROPERTY()
    ABettingManager* BettingManager;

    void AdvancePhase();
    void LogPhase() const;

    // Game phase handlers
    void OnWaitingToStart();
    void OnDeal();
    void OnPreflop();
    void OnFlop();
    void OnTurn();
    void OnRiver();
    void OnShowdown();
    void OnEndHand();

    // Helper functions for betting rounds
    void ProcessBettingRound();
    void HandlePlayerAction(int32 PlayerIndex);
    FPokerActionState CreateCurrentActionState() const;
};
