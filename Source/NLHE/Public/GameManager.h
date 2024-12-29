// GameManager.h
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "TableManager.h"
#include "BettingManager.h"
#include "Dealer.h"
#include "GameManager.generated.h"

UCLASS()
class NLHE_API AGameManager : public AGameModeBase {
    GENERATED_BODY()

public:
    AGameManager();

    virtual void BeginPlay() override;
    void StartNewHand();
    void AdvanceGamePhase();

private:
    ATableManager* TableManager;
    ABettingManager* BettingManager;
    ADealer* Dealer;

    enum class EGamePhase : uint8 {
        WaitingToStart,
        Deal,
        PreFlop,
        Flop,
        Turn,
        River,
        Showdown
    };

    EGamePhase CurrentPhase;
};
