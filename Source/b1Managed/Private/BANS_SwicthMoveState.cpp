#include "BANS_SwicthMoveState.h"

UBANS_SwicthMoveState::UBANS_SwicthMoveState() {
    this->MovementMode = MOVE_None;
}

void UBANS_SwicthMoveState::GSNotifyEndCS_Implementation(FUStGSNotifyParam NotifyParam) const {
}

void UBANS_SwicthMoveState::GSNotifyBeginCS_Implementation(FUStGSNotifyParam NotifyParam, float TotalDuration) const {
}


