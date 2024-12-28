// PokerTypes.h
#pragma once

#include "CoreMinimal.h"
#include "Card.h"
#include "PokerTerms.generated.h"

UENUM(BlueprintType)
enum class EGamePhase : uint8
{
    WaitingToStart UMETA(DisplayName = "WaitingToStart"),
    Deal UMETA(DisplayName = "Deal"),
    Preflop UMETA(DisplayName = "Preflop"),
    Flop UMETA(DisplayName = "Flop"),
    Turn UMETA(DisplayName = "Turn"),
    River UMETA(DisplayName = "River"),
    Showdown UMETA(DisplayName = "Showdown"),
    EndHand UMETA(DisplayName = "EndHand"),
};

UENUM(BlueprintType)
enum class EPokerAction : uint8
{
    None        UMETA(DisplayName = "None"),
    Check       UMETA(DisplayName = "Check"),
    Call        UMETA(DisplayName = "Call"),
    Bet         UMETA(DisplayName = "Bet"),
    Raise       UMETA(DisplayName = "Raise"),
    Fold        UMETA(DisplayName = "Fold")
};

UENUM(BlueprintType)
enum class EPosition : uint8
{
    None        UMETA(DisplayName = "None"),
    Button      UMETA(DisplayName = "Button"),
    SmallBlind  UMETA(DisplayName = "Small Blind"),
    BigBlind    UMETA(DisplayName = "Big Blind"),
    UTG         UMETA(DisplayName = "Under the Gun"),
    HJ          UMETA(DisplayName = "Hijack"),
    CO          UMETA(DisplayName = "Cutoff")
};

USTRUCT(BlueprintType)
struct FPlayerBets
{
    GENERATED_BODY()

    UPROPERTY()
    int32 CurrentBet;

    UPROPERTY()
    int32 TotalBetThisStreet;

    UPROPERTY()
    bool HasActed;

    FPlayerBets() : CurrentBet(0), TotalBetThisStreet(0), HasActed(false) {}
};

USTRUCT(BlueprintType)
struct FPot
{
    GENERATED_BODY()

    UPROPERTY()
    int32 Amount;

    UPROPERTY()
    TArray<int32> EligiblePlayers;

    FPot() : Amount(0) {}
};

USTRUCT(BlueprintType)
struct FPokerActionState  // Changed from FGameState to better reflect its purpose
{
    GENERATED_BODY()

    UPROPERTY()
    EGamePhase Phase;

    UPROPERTY()
    int32 CurrentBet;

    UPROPERTY()
    int32 MainPot;

    UPROPERTY()
    TArray<FCard> CommunityCards;

    UPROPERTY()
    int32 ActionOn;

    FPokerActionState()
        : Phase(EGamePhase::WaitingToStart)
        , CurrentBet(0)
        , MainPot(0)
        , ActionOn(0)
    {}
};