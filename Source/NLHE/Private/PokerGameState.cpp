// PokerGameState.cpp
#include "PokerGameState.h"
#include "Net/UnrealNetwork.h"

APokerGameState::APokerGameState()
    : TotalPot(0)
    , CurrentPhase(EGamePhase::WaitingToStart)
{
}

void APokerGameState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);

    DOREPLIFETIME(APokerGameState, CommunityCards);
    DOREPLIFETIME(APokerGameState, TotalPot);
    DOREPLIFETIME(APokerGameState, CurrentPhase);
}