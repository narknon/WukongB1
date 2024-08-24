#include "BAN_GSParkourAnimInfo.h"

UBAN_GSParkourAnimInfo::UBAN_GSParkourAnimInfo() {
    this->AnimForwardMovement = 0.00f;
    this->AnimRightMovement = 0.00f;
    this->AnimUpMovement = 0.00f;
}

void UBAN_GSParkourAnimInfo::SetAnimMovementValue(FVector Movement) const {
}

void UBAN_GSParkourAnimInfo::GSNotifyCS_Implementation(FUStGSNotifyParam NotifyParam) const {
}

bool UBAN_GSParkourAnimInfo::bIsNativeBranchingPointCS_Implementation() const {
    return false;
}


