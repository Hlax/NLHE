// AIPlayer.h (Update)
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ActionInterface.h"
#include "AIPlayer.generated.h"

UCLASS()
class NLHE_API AAIPlayer : public AActor, public IActionInterface {
    GENERATED_BODY()

public:
    AAIPlayer();

    virtual void Fold() override;
    virtual void Check() override;
    virtual void Bet(int32 Amount) override;
    virtual void Call() override;
    virtual void Raise(int32 Amount) override;
    virtual void AllIn() override;

    // Decision logic (simplified for testing)
    EPokerAction DecideAction();
};
