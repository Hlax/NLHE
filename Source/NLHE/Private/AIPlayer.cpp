// AIPlayer.cpp
#include "AIPlayer.h"

AAIPlayer::AAIPlayer() {
    PrimaryActorTick.bCanEverTick = false;
}

void AAIPlayer::Fold() {
    UE_LOG(LogTemp, Warning, TEXT("AIPlayer: Fold"));
}

void AAIPlayer::Check() {
    UE_LOG(LogTemp, Warning, TEXT("AIPlayer: Check"));
}

void AAIPlayer::Bet(int32 Amount) {
    UE_LOG(LogTemp, Warning, TEXT("AIPlayer: Bet %d"), Amount);
}

void AAIPlayer::Call() {
    UE_LOG(LogTemp, Warning, TEXT("AIPlayer: Call"));
}

void AAIPlayer::Raise(int32 Amount) {
    UE_LOG(LogTemp, Warning, TEXT("AIPlayer: Raise %d"), Amount);
}

void AAIPlayer::AllIn() {
    UE_LOG(LogTemp, Warning, TEXT("AIPlayer: All-In"));
}

EPokerAction AAIPlayer::DecideAction() {
    // Simplified decision-making logic
    return EPokerAction::Check;
}