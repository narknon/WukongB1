#include "BAN_GSTriggerWinePartner.h"

UBAN_GSTriggerWinePartner::UBAN_GSTriggerWinePartner() {
    this->TriggerId = 0;
}

void UBAN_GSTriggerWinePartner::GSNotifyCS_Implementation(FUStGSNotifyParam NotifyParam) const {
}

bool UBAN_GSTriggerWinePartner::bIsNativeBranchingPointCS_Implementation() const {
    return false;
}


