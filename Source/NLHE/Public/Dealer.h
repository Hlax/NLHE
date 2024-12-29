// Dealer.h
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Card.h"
#include "Dealer.generated.h"

UCLASS()
class NLHE_API ADealer : public AActor {
    GENERATED_BODY()

public:
    ADealer();

    void ShuffleDeck();
    void LogTopCards(int32 Count) const;
    FCard SafeDrawCard();
    void DealHoleCards(const TArray<int32>& ActiveSeats, int32 CardsPerSeat);
    void DealFlop();
    void DealTurn();
    void DealRiver();
    void ResetDeck();

private:
    TArray<FCard> Deck;
};