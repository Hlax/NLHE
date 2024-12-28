// AIPlayer.cpp
#include "AIPlayer.h"

AAIPlayer::AAIPlayer()
    : Stack(DEFAULT_STACK)
    , Position(EPosition::None)
{
    PrimaryActorTick.bCanEverTick = false;
}

EPokerAction AAIPlayer::DecideAction(const FPokerActionState& State)
{
    UE_LOG(LogTemp, Log, TEXT("Player %d (%s) deciding action - Stack: %d, Position: %s"),
        GetUniqueID(),
        *UEnum::GetValueAsString(Position),
        Stack,
        *UEnum::GetValueAsString(Position));

    UE_LOG(LogTemp, Log, TEXT("Game State - Phase: %s, Current Bet: %d, Pot: %d"),
        *UEnum::GetValueAsString(State.Phase),
        State.CurrentBet,
        State.MainPot);

    // Calculate call amount
    int32 AmountToCall = State.CurrentBet;

    // For initial testing, just check or call
    EPokerAction ChosenAction;
    if (AmountToCall > 0)
    {
        ChosenAction = EPokerAction::Call;
        UE_LOG(LogTemp, Log, TEXT("Player %d calling amount: %d"),
            GetUniqueID(), AmountToCall);

        // Update stack
        if (RemoveFromStack(AmountToCall))
        {
            UE_LOG(LogTemp, Log, TEXT("Stack updated after call. New stack: %d"), Stack);
        }
    }
    else
    {
        ChosenAction = EPokerAction::Check;
        UE_LOG(LogTemp, Log, TEXT("Player %d checking"), GetUniqueID());
    }

    return ChosenAction;
}

void AAIPlayer::UpdateHoleCards(const TArray<FCard>& Cards)
{
    if (Cards.Num() != 2)
    {
        UE_LOG(LogTemp, Warning, TEXT("Player %d received invalid number of hole cards: %d"),
            GetUniqueID(),
            Cards.Num());
        return;
    }

    HoleCards = Cards;

    // Log the cards received
    UE_LOG(LogTemp, Log, TEXT("Player %d (%s) received hole cards: %s, %s"),
        GetUniqueID(),
        *UEnum::GetValueAsString(Position),
        *Cards[0].ToString(),
        *Cards[1].ToString());
}

bool AAIPlayer::AddToStack(int32 Amount)
{
    if (Amount <= 0)
    {
        UE_LOG(LogTemp, Warning, TEXT("Invalid attempt to add %d to player %d's stack"),
            Amount,
            GetUniqueID());
        return false;
    }

    int32 OldStack = Stack;
    Stack += Amount;

    LogStackChange(Amount, TEXT("Add"));

    // Verify stack change
    ensure(Stack == OldStack + Amount);

    return true;
}

bool AAIPlayer::RemoveFromStack(int32 Amount)
{
    if (Amount <= 0)
    {
        UE_LOG(LogTemp, Warning, TEXT("Invalid attempt to remove %d from player %d's stack"),
            Amount,
            GetUniqueID());
        return false;
    }

    if (Amount > Stack)
    {
        UE_LOG(LogTemp, Warning, TEXT("Player %d cannot remove %d from stack of %d"),
            GetUniqueID(),
            Amount,
            Stack);
        return false;
    }

    int32 OldStack = Stack;
    Stack -= Amount;

    LogStackChange(-Amount, TEXT("Remove"));

    // Verify stack change
    ensure(Stack == OldStack - Amount);

    return true;
}

void AAIPlayer::LogStackChange(int32 Amount, FString Reason) const
{
    UE_LOG(LogTemp, Log, TEXT("Player %d (%s) stack %s: %d, Old Stack: %d, New Stack: %d"),
        GetUniqueID(),
        *UEnum::GetValueAsString(Position),
        *Reason,
        FMath::Abs(Amount),
        Stack - Amount,  // Old stack
        Stack);         // New stack

    // Additional validation checks
    if (Stack < 0)
    {
        UE_LOG(LogTemp, Error, TEXT("Player %d stack went negative! Stack: %d"),
            GetUniqueID(),
            Stack);
    }
}