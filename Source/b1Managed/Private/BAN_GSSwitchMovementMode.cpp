#include "BAN_GSSwitchMovementMode.h"

UBAN_GSSwitchMovementMode::UBAN_GSSwitchMovementMode() {
    this->MovementMode = MOVE_None;
}

void UBAN_GSSwitchMovementMode::GSNotifyCS_Implementation(FUStGSNotifyParam NotifyParam) const {
}

bool UBAN_GSSwitchMovementMode::bIsNativeBranchingPointCS_Implementation() const {
    return false;
}


