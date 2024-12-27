#include "TableManager.h"

// Constructor
ATableManager::ATableManager()
{
    // Initialize the seat array
    InitializeSeats();
}

void ATableManager::BeginPlay()
{
    Super::BeginPlay();

    // Log the seat initialization for debugging
    UE_LOG(LogTemp, Log, TEXT("Table initialized with %d seats."), Seats.Num());
}

// Initialize the seats (default to 6 seats, all empty for this example)
void ATableManager::InitializeSeats()
{
    const int32 NumSeats = 6; // Fixed seat count
    Seats.Init(false, NumSeats); // Initialize all seats as "false" (unoccupied)
}

// Get the number of seats at the table
int32 ATableManager::GetSeatCount() const
{
    return Seats.Num();
}
