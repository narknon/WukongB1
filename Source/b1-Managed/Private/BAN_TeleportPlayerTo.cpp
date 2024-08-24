#include "BAN_TeleportPlayerTo.h"

UBAN_TeleportPlayerTo::UBAN_TeleportPlayerTo() {
    this->ResetCamera = false;
}

void UBAN_TeleportPlayerTo::GSNotifyCS_Implementation(FUStGSNotifyParam NotifyParam) const {
}

bool UBAN_TeleportPlayerTo::bIsNativeBranchingPointCS_Implementation() const {
    return false;
}


