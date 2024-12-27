// Dealer.cpp
#include "Dealer.h"

// Shuffle the deck and log the top 20 cards
void ADealer::ShuffleDeck()
{
    Deck.Shuffle();
    UE_LOG(LogTemp, Log, TEXT("Deck shuffled."));
    LogTopCards(20); // Log the top 20 cards after shuffling
}

// Log the top N cards in the deck for debugging
void ADealer::LogTopCards(int32 Count) const
{
    UE_LOG(LogTemp, Log, TEXT("Top %d cards in the deck:"), Count);

    const TArray<FCard>& Cards = Deck.GetCards();
    for (int32 i = 0; i < FMath::Min(Count, Cards.Num()); i++)
    {
        UE_LOG(LogTemp, Log, TEXT("Card %d: %s"), i + 1, *Cards[i].ToString());
    }
}

FCard ADealer::SafeDrawCard()
{
    if (Deck.GetRemainingCards() > 0)
    {
        return Deck.DrawCard();
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("Deck is empty! Returning default card."));
        return FCard(); // Return a default card
    }
}

void ADealer::DealHoleCards(int32 NumSeats, int32 CardsPerSeat)
{
    // Log the top 20 cards before dealing
    UE_LOG(LogTemp, Log, TEXT("Top 20 cards before dealing hole cards:"));
    const TArray<FCard>& Cards = Deck.GetCards(); // Access deck directly
    for (int32 i = 0; i < FMath::Min(Cards.Num(), 20); i++)
    {
        UE_LOG(LogTemp, Log, TEXT("Card %d: %s"), i + 1, *Cards[i].ToString());
    }

    // Deal hole cards
    for (int32 i = 0; i < CardsPerSeat; i++)
    {
        for (int32 SeatIndex = 0; SeatIndex < NumSeats; SeatIndex++)
        {
            FCard Card = Deck.DrawCard();
            UE_LOG(LogTemp, Log, TEXT("Seat %d: Dealt %s"), SeatIndex, *Card.ToString());
        }
    }
}

void ADealer::DealFlop()
{
    FCard BurnCard = Deck.DrawCard(); // Burn one card
    UE_LOG(LogTemp, Log, TEXT("Burned Card: %s"), *BurnCard.ToString());

    for (int32 i = 0; i < 3; i++)
    {
        FCard Card = Deck.DrawCard();
        UE_LOG(LogTemp, Log, TEXT("Flop Card %d: %s"), i + 1, *Card.ToString());
    }
}

// Deal the Turn and discard a card
void ADealer::DealTurn()
{
    FCard BurnCard = Deck.DrawCard(); // Burn one card
    UE_LOG(LogTemp, Log, TEXT("Burned Card: %s"), *BurnCard.ToString());

    FCard Card = Deck.DrawCard();
    UE_LOG(LogTemp, Log, TEXT("Turn Card: %s"), *Card.ToString());
}

// Deal the River and discard a card
void ADealer::DealRiver()
{
    FCard BurnCard = Deck.DrawCard(); // Burn one card
    UE_LOG(LogTemp, Log, TEXT("Burned Card: %s"), *BurnCard.ToString());

    FCard Card = Deck.DrawCard();
    UE_LOG(LogTemp, Log, TEXT("River Card: %s"), *Card.ToString());
}

void ADealer::ResetDeck()
{
    Deck.Reset(); // Calls the Reset method of the FDeck class
    UE_LOG(LogTemp, Log, TEXT("Deck has been reset."));
}

