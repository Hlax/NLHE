// AIPlayer.h
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PokerTerms.h"
#include "Card.h"
#include "AIPlayer.generated.h"

UCLASS()
class NLHE_API AAIPlayer : public AActor
{
    GENERATED_BODY()

public:
    AAIPlayer();

    // Core gameplay functions
    EPokerAction DecideAction(const FPokerActionState& State);
    void UpdateHoleCards(const TArray<FCard>& Cards);

    // Stack management
    bool AddToStack(int32 Amount);
    bool RemoveFromStack(int32 Amount);
    int32 GetStack() const { return Stack; }

    // Position management
    void SetPosition(EPosition NewPosition) { Position = NewPosition; }
    EPosition GetPosition() const { return Position; }

private:
    UPROPERTY()
    int32 Stack;

    UPROPERTY()
    TArray<FCard> HoleCards;

    UPROPERTY()
    EPosition Position;

    void LogStackChange(int32 Amount, FString Reason) const;

    static constexpr int32 DEFAULT_STACK = 10000; // 100 BB
};