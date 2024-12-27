#pragma once

#include "CoreMinimal.h"
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
