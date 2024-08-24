#include "BANS_GSSwitchMovementMode.h"

UBANS_GSSwitchMovementMode::UBANS_GSSwitchMovementMode() {
    this->MovementMode = MOVE_None;
}

void UBANS_GSSwitchMovementMode::GSNotifyEndCS_Implementation(FUStGSNotifyParam NotifyParam) const {
}

void UBANS_GSSwitchMovementMode::GSNotifyBeginCS_Implementation(FUStGSNotifyParam NotifyParam, float TotalDuration) const {
}


