// TableManager.cpp
#include "TableManager.h"
#include "AIPlayer.h"

ATableManager::ATableManager()
    : ButtonPosition(0)
    , CurrentActionOn(0)
{
}

void ATableManager::InitializeTable(int32 NumSeats)
{
    Seats.SetNum(NumSeats);
    for (auto& Seat : Seats)
    {
        Seat = FSeat();
    }

    ButtonPosition = 0;
    CurrentActionOn = 0;

    UE_LOG(LogTemp, Log, TEXT("Table initialized with %d seats."), NumSeats);
}

void ATableManager::MoveDealerButton()
{
    // Find next active seat for button
    do {
        ButtonPosition = (ButtonPosition + 1) % Seats.Num();
    } while (!Seats[ButtonPosition].IsActive && ButtonPosition != 0);

    // Update positions for all seats
    for (int32 i = 0; i < Seats.Num(); i++)
    {
        if (!Seats[i].IsActive)
            continue;

        int32 PositionsFromButton = (i - ButtonPosition + Seats.Num()) % Seats.Num();

        switch (PositionsFromButton)
        {
        case 0:
            Seats[i].Position = EPosition::Button;
            break;
        case 1:
            Seats[i].Position = EPosition::SmallBlind;
            break;
        case 2:
            Seats[i].Position = EPosition::BigBlind;
            break;
        case 3:
            Seats[i].Position = EPosition::UTG;
            break;
        case 4:
            Seats[i].Position = EPosition::HJ;
            break;
        case 5:
            Seats[i].Position = EPosition::CO;
            break;
        default:
            Seats[i].Position = EPosition::None;
            break;
        }

        // Update player's position if there is one
        if (Seats[i].Player)
        {
            Seats[i].Player->SetPosition(Seats[i].Position);
        }
    }

    UE_LOG(LogTemp, Log, TEXT("Button moved to position %d"), ButtonPosition);
}

int32 ATableManager::GetNextActivePlayer() const
{
    int32 NextSeat = CurrentActionOn;
    int32 StartingSeat = NextSeat;

    do {
        NextSeat = (NextSeat + 1) % Seats.Num();
        if (Seats[NextSeat].IsActive)
        {
            return NextSeat;
        }
    } while (NextSeat != StartingSeat);

    // If we get here, no active players found
    return -1;
}

void ATableManager::AssignPlayerToSeat(int32 SeatIndex, AAIPlayer* Player)
{
    if (!Seats.IsValidIndex(SeatIndex) || !Player)
    {
        UE_LOG(LogTemp, Warning, TEXT("Invalid seat assignment attempt"));
        return;
    }

    FSeat& Seat = Seats[SeatIndex];
    if (Seat.IsActive)
    {
        UE_LOG(LogTemp, Warning, TEXT("Seat %d is already occupied"), SeatIndex);
        return;
    }

    Seat.Player = Player;
    Seat.IsActive = true;
    Seat.Stack = Player->GetStack();

    // Update position
    int32 PositionsFromButton = (SeatIndex - ButtonPosition + Seats.Num()) % Seats.Num();
    switch (PositionsFromButton)
    {
    case 0: Seat.Position = EPosition::Button; break;
    case 1: Seat.Position = EPosition::SmallBlind; break;
    case 2: Seat.Position = EPosition::BigBlind; break;
    case 3: Seat.Position = EPosition::UTG; break;
    case 4: Seat.Position = EPosition::HJ; break;
    case 5: Seat.Position = EPosition::CO; break;
    default: Seat.Position = EPosition::None; break;
    }

    Player->SetPosition(Seat.Position);

    UE_LOG(LogTemp, Log, TEXT("Player assigned to seat %d with position %s"),
        SeatIndex, *UEnum::GetValueAsString(Seat.Position));
}