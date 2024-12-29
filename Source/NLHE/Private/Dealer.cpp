// Dealer.cpp
#include "Dealer.h"

ADealer::ADealer() {
    PrimaryActorTick.bCanEverTick = false;
}

void ADealer::ShuffleDeck() {
    Deck.Empty();
    // Add all 52 cards to the deck
    for (int32 Suit = 0; Suit < 4; Suit++) {
        for (int32 Rank = 2; Rank <= 14; Rank++) { // Ranks start from Two (2) to Ace (14)
            Deck.Add(FCard(static_cast<ESuit>(Suit), static_cast<ERank>(Rank)));
        }
    }
    Deck.Sort([](const FCard& A, const FCard& B) { return FMath::RandBool(); });
    UE_LOG(LogTemp, Log, TEXT("Deck shuffled."));
    LogTopCards(52);
}


void ADealer::LogTopCards(int32 Count) const {
    UE_LOG(LogTemp, Log, TEXT("Top %d cards in the deck:"), Count);
    for (int32 i = 0; i < FMath::Min(Count, Deck.Num()); i++) {
        UE_LOG(LogTemp, Log, TEXT("Card %d: %s"), i + 1, *Deck[i].ToString());
    }
}

FCard ADealer::SafeDrawCard() {
    if (Deck.Num() > 0) {
        FCard Card = Deck.Pop();
        UE_LOG(LogTemp, Log, TEXT("Drew card: %s"), *Card.ToString());
        return Card;
    }
    else {
        UE_LOG(LogTemp, Warning, TEXT("Deck is empty! Returning default card."));
        return FCard(); // Return a default card
    }
}

void ADealer::DealHoleCards(const TArray<int32>& ActiveSeats, int32 CardsPerSeat) {
    UE_LOG(LogTemp, Log, TEXT("Starting to deal hole cards..."));

    for (int32 i = 0; i < CardsPerSeat; i++) {
        for (int32 Seat : ActiveSeats) {
            FCard Card = SafeDrawCard();
            UE_LOG(LogTemp, Log, TEXT("Seat %d: Dealt %s"), Seat, *Card.ToString());
        }
    }
}

void ADealer::DealFlop() {
    FCard BurnCard = SafeDrawCard(); // Burn one card
    UE_LOG(LogTemp, Log, TEXT("Burned Card: %s"), *BurnCard.ToString());

    for (int32 i = 0; i < 3; i++) {
        FCard Card = SafeDrawCard();
        UE_LOG(LogTemp, Log, TEXT("Flop Card %d: %s"), i + 1, *Card.ToString());
    }
}

void ADealer::DealTurn() {
    FCard BurnCard = SafeDrawCard(); // Burn one card
    UE_LOG(LogTemp, Log, TEXT("Burned Card: %s"), *BurnCard.ToString());

    FCard Card = SafeDrawCard();
    UE_LOG(LogTemp, Log, TEXT("Turn Card: %s"), *Card.ToString());
}

void ADealer::DealRiver() {
    FCard BurnCard = SafeDrawCard(); // Burn one card
    UE_LOG(LogTemp, Log, TEXT("Burned Card: %s"), *BurnCard.ToString());

    FCard Card = SafeDrawCard();
    UE_LOG(LogTemp, Log, TEXT("River Card: %s"), *Card.ToString());
}

void ADealer::ResetDeck() {
    Deck.Empty();
    ShuffleDeck();
    UE_LOG(LogTemp, Log, TEXT("Deck has been reset."));
}
