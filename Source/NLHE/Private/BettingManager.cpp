// BettingManager.cpp
#include "BettingManager.h"

ABettingManager::ABettingManager()
    : CurrentBet(0)
    , MinRaise(DEFAULT_BIG_BLIND)
    , MainPot(0)
{
}

void ABettingManager::InitializePlayerBets(int32 NumPlayers)
{
    PlayerBets.SetNum(NumPlayers);
    for (auto& PlayerBet : PlayerBets)
    {
        PlayerBet = FPlayerBets();
    }
}

bool ABettingManager::ProcessAction(int32 PlayerIndex, EPokerAction Action, int32 Amount)
{
    if (!PlayerBets.IsValidIndex(PlayerIndex))
    {
        UE_LOG(LogTemp, Warning, TEXT("Invalid player index %d in ProcessAction"), PlayerIndex);
        return false;
    }

    UE_LOG(LogTemp, Log, TEXT("Processing Action - Player: %d, Action: %s, Amount: %d"),
        PlayerIndex,
        *UEnum::GetValueAsString(Action),
        Amount);

    UE_LOG(LogTemp, Log, TEXT("Before Action - Current Bet: %d, Main Pot: %d"),
        CurrentBet,
        MainPot);

    FPlayerBets& PlayerBet = PlayerBets[PlayerIndex];

    switch (Action)
    {
    case EPokerAction::Check:
        if (CurrentBet > PlayerBet.CurrentBet)
        {
            UE_LOG(LogTemp, Warning, TEXT("Invalid check - there's a bet to call"));
            return false;
        }
        PlayerBet.HasActed = true;
        break;

    case EPokerAction::Call:
    {
        int32 CallAmount = CurrentBet - PlayerBet.CurrentBet;
        if (CallAmount > 0)
        {
            PlayerBet.CurrentBet = CurrentBet;
            PlayerBet.TotalBetThisStreet += CallAmount;
            MainPot += CallAmount;

            UE_LOG(LogTemp, Log, TEXT("Call processed - Amount: %d, New Player Total: %d"),
                CallAmount,
                PlayerBet.TotalBetThisStreet);
        }
        PlayerBet.HasActed = true;
    }
    break;

    case EPokerAction::Bet:
        if (CurrentBet > 0)
        {
            UE_LOG(LogTemp, Warning, TEXT("Cannot bet - there's already a bet"));
            return false;
        }
        if (Amount < DEFAULT_BIG_BLIND)
        {
            UE_LOG(LogTemp, Warning, TEXT("Bet must be at least one big blind"));
            return false;
        }
        CurrentBet = Amount;
        PlayerBet.CurrentBet = Amount;
        PlayerBet.TotalBetThisStreet += Amount;
        MainPot += Amount;
        MinRaise = Amount * 2;
        break;

    case EPokerAction::Raise:
        if (Amount <= CurrentBet || Amount < MinRaise)
        {
            UE_LOG(LogTemp, Warning, TEXT("Invalid raise amount: %d"), Amount);
            return false;
        }
        CurrentBet = Amount;
        PlayerBet.CurrentBet = Amount;
        PlayerBet.TotalBetThisStreet += Amount;
        MainPot += Amount;
        MinRaise = Amount * 2;
        break;

    case EPokerAction::Fold:
        PlayerBet.HasActed = true;
        break;

    default:
        UE_LOG(LogTemp, Warning, TEXT("Invalid action"));
        return false;
    }

    UE_LOG(LogTemp, Log, TEXT("After Action - Current Bet: %d, Main Pot: %d, Player Total this Street: %d"),
        CurrentBet,
        MainPot,
        PlayerBet.TotalBetThisStreet);

    PlayerBet.HasActed = true;
    return true;
}

void ABettingManager::CollectBlinds()
{
    // Process small blind
    ProcessAction(1, EPokerAction::Bet, DEFAULT_SMALL_BLIND);

    // Process big blind
    ProcessAction(2, EPokerAction::Bet, DEFAULT_BIG_BLIND);

    CurrentBet = DEFAULT_BIG_BLIND;
    MinRaise = DEFAULT_BIG_BLIND * 2;

    UE_LOG(LogTemp, Log, TEXT("Blinds collected. SB: %d, BB: %d"),
        DEFAULT_SMALL_BLIND, DEFAULT_BIG_BLIND);
}

void ABettingManager::ResetForNewStreet()
{
    CurrentBet = 0;
    MinRaise = DEFAULT_BIG_BLIND;

    for (FPlayerBets& PlayerBet : PlayerBets)
    {
        PlayerBet.CurrentBet = 0;
        PlayerBet.TotalBetThisStreet = 0;
        PlayerBet.HasActed = false;
    }

    UE_LOG(LogTemp, Log, TEXT("Betting reset for new street. Pot: %d"), MainPot);
}

TArray<EPokerAction> ABettingManager::GetValidActions(int32 PlayerIndex) const
{
    TArray<EPokerAction> ValidActions;

    if (!PlayerBets.IsValidIndex(PlayerIndex))
        return ValidActions;

    const FPlayerBets& PlayerBet = PlayerBets[PlayerIndex];

    // Can always fold (unless checking is free)
    if (CurrentBet > PlayerBet.CurrentBet)
    {
        ValidActions.Add(EPokerAction::Fold);
    }

    // Can check if no bet to call
    if (CurrentBet <= PlayerBet.CurrentBet)
    {
        ValidActions.Add(EPokerAction::Check);
    }

    // Can call if there's a bet to call
    if (CurrentBet > PlayerBet.CurrentBet)
    {
        ValidActions.Add(EPokerAction::Call);
    }

    // Can bet if no current bet
    if (CurrentBet == 0)
    {
        ValidActions.Add(EPokerAction::Bet);
    }
    // Can raise if there's a bet to raise
    else if (CurrentBet > 0)
    {
        ValidActions.Add(EPokerAction::Raise);
    }

    return ValidActions;
}