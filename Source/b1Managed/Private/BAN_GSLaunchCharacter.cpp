#include "BAN_GSLaunchCharacter.h"

UBAN_GSLaunchCharacter::UBAN_GSLaunchCharacter() {
    this->bXYOverride = false;
    this->bZOverride = false;
}

void UBAN_GSLaunchCharacter::GSNotifyCS_Implementation(FUStGSNotifyParam NotifyParam) const {
}

bool UBAN_GSLaunchCharacter::bIsNativeBranchingPointCS_Implementation() const {
    return false;
}


