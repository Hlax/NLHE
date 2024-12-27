// Deck.h
#pragma once

#include "CoreMinimal.h"
#include "Card.h"
#include "Deck.generated.h"

USTRUCT()
struct NLHE_API FDeck
{
    GENERATED_BODY()

public:
    FDeck();

    void Initialize();
    void Shuffle();
    FCard DrawCard();
    const TArray<FCard>& GetCards() const { return Cards; }
    void Reset();
    int32 GetRemainingCards() const { return Cards.Num(); }

private:
    UPROPERTY()
    TArray<FCard> Cards;
};