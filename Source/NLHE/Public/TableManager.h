// TableManager.h
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PokerTerms.h"
#include "TableManager.generated.h"

class AAIPlayer;

USTRUCT()
struct NLHE_API FSeat
{
    GENERATED_BODY()

    UPROPERTY()
    AAIPlayer* Player;

    UPROPERTY()
    int32 Stack;

    UPROPERTY()
    bool IsActive;

    UPROPERTY()
    EPosition Position;

    FSeat()
        : Player(nullptr)
        , Stack(0)
        , IsActive(false)
        , Position(EPosition::None)
    {}
};

UCLASS()
class NLHE_API ATableManager : public AActor
{
    GENERATED_BODY()

public:
    ATableManager();

    void MoveDealerButton();
    int32 GetNextActivePlayer() const;
    void AssignPlayerToSeat(int32 SeatIndex, AAIPlayer* Player);
    void InitializeTable(int32 NumSeats);

    // Getters
    int32 GetSeatCount() const { return Seats.Num(); }
    int32 GetButtonPosition() const { return ButtonPosition; }
    const FSeat& GetSeat(int32 Index) const { return Seats[Index]; }

private:
    UPROPERTY()
    TArray<FSeat> Seats;

    UPROPERTY()
    int32 ButtonPosition;

    UPROPERTY()
    int32 CurrentActionOn;

    static constexpr int32 DEFAULT_SEAT_COUNT = 6;
};