#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "PokerTerms.h"
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
    EGamePhase CurrentPhase;
    int32 HandCount;

    UPROPERTY()
    class ATableManager* TableManager;

    UPROPERTY()
    class ADealer* Dealer;

    void AdvancePhase();
    void LogPhase() const;

    void OnWaitingToStart();
    void OnDeal();
    void OnPreflop();
    void OnFlop();
    void OnTurn();
    void OnRiver();
    void OnShowdown();
    void OnEndHand();
};
