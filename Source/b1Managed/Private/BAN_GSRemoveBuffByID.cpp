#include "BAN_GSRemoveBuffByID.h"

UBAN_GSRemoveBuffByID::UBAN_GSRemoveBuffByID() {
    this->BuffID = 0;
    this->BuffLayer = 0;
    this->WithTriggerRemmoveEffect = true;
}

void UBAN_GSRemoveBuffByID::GSNotifyCS_Implementation(FUStGSNotifyParam NotifyParam) const {
}

bool UBAN_GSRemoveBuffByID::bIsNativeBranchingPointCS_Implementation() const {
    return false;
}


