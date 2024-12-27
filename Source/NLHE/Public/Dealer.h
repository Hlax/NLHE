// Dealer.h
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Deck.h"
#include "Dealer.generated.h"

UCLASS()
class NLHE_API ADealer : public AActor
{
    GENERATED_BODY()

public:
    void ShuffleDeck();
    void DealHoleCards(int32 NumSeats, int32 CardsPerSeat);
    void DealFlop();
    void DealTurn();
    void DealRiver();
    void ResetDeck();
    FCard SafeDrawCard();
    void LogTopCards(int32 Count) const; // Logs the top N cards of the deck

private:
    FDeck Deck;
};