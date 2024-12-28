// PokerGameState.h
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "PokerTerms.h"
#include "Card.h"
#include "PokerGameState.generated.h"

UCLASS()
class NLHE_API APokerGameState : public AGameStateBase
{
    GENERATED_BODY()

public:
    APokerGameState();

    // Remove BlueprintCallable specifier
    const TArray<FCard>& GetCommunityCards() const { return CommunityCards; }
    int32 GetTotalPot() const { return TotalPot; }
    EGamePhase GetCurrentPhase() const { return CurrentPhase; }

    // Setters
    void SetCommunityCards(const TArray<FCard>& NewCards) { CommunityCards = NewCards; }
    void SetTotalPot(int32 NewPot) { TotalPot = NewPot; }
    void SetCurrentPhase(EGamePhase NewPhase) { CurrentPhase = NewPhase; }

protected:
    UPROPERTY(Replicated)
    TArray<FCard> CommunityCards;

    UPROPERTY(Replicated)
    int32 TotalPot;

    UPROPERTY(Replicated)
    EGamePhase CurrentPhase;
};