#include "BAN_GSReSetHoldShield.h"

UBAN_GSReSetHoldShield::UBAN_GSReSetHoldShield() {
    this->IsRemove = false;
    this->ABPSetting = NULL;
    this->PartId = 0;
}

void UBAN_GSReSetHoldShield::GSNotifyCS_Implementation(FUStGSNotifyParam NotifyParam) const {
}

void UBAN_GSReSetHoldShield::GSValidateInputCS_Implementation(AActor* Actor) const {
}

bool UBAN_GSReSetHoldShield::bIsNativeBranchingPointCS_Implementation() const {
    return false;
}


