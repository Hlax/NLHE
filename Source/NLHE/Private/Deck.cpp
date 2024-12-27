// Deck.cpp
#include "Deck.h"

FDeck::FDeck()
{
    Initialize();
}

void FDeck::Initialize()
{
    Cards.Empty();

    // Create all 52 cards
    for (int32 SuitIndex = 0; SuitIndex < 4; SuitIndex++)
    {
        for (int32 RankIndex = static_cast<int32>(ERank::Two);
            RankIndex <= static_cast<int32>(ERank::Ace);
            RankIndex++)
        {
            Cards.Add(FCard(static_cast<ESuit>(SuitIndex),
                static_cast<ERank>(RankIndex)));
        }
    }
}

void FDeck::Shuffle()
{
    const int32 NumCards = Cards.Num();

    for (int32 i = NumCards - 1; i > 0; i--)
    {
        int32 j = FMath::RandRange(0, i);
        if (i != j)
        {
            Cards.Swap(i, j);
        }
    }
}

FCard FDeck::DrawCard()
{
    if (Cards.Num() > 0)
    {
        FCard Card = Cards.Pop();
        UE_LOG(LogTemp, Log, TEXT("Drawn Card: %s"), *Card.ToString());
        return Card;
    }

    UE_LOG(LogTemp, Warning, TEXT("Attempted to draw from an empty deck!"));
    return FCard(); // Return a default card if empty
}

void FDeck::Reset()
{
    Initialize(); // Reinitializes the deck with all 52 cards
    Shuffle();    // Optionally shuffle the deck immediately after resetting
}