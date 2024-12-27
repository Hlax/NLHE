#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TableManager.generated.h"

UCLASS()
class NLHE_API ATableManager : public AActor
{
    GENERATED_BODY()

public:
    ATableManager();

    // Get the number of seats at the table
    int32 GetSeatCount() const;

protected:
    virtual void BeginPlay() override;

private:
    // Array representing the seats at the table (empty for now)
    TArray<bool> Seats;

    // Initialize seats (6 seats for this setup)
    void InitializeSeats();
};
