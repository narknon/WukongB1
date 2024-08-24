#include "BAN_GSIncreaseChargeLevel.h"

UBAN_GSIncreaseChargeLevel::UBAN_GSIncreaseChargeLevel() {
    this->IncreaseValue = 0;
}

void UBAN_GSIncreaseChargeLevel::GSNotifyCS_Implementation(FUStGSNotifyParam NotifyParam) const {
}

bool UBAN_GSIncreaseChargeLevel::bIsNativeBranchingPointCS_Implementation() const {
    return false;
}


