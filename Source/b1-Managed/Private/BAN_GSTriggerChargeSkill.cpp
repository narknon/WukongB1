#include "BAN_GSTriggerChargeSkill.h"

UBAN_GSTriggerChargeSkill::UBAN_GSTriggerChargeSkill() {
    this->ChargeTimeMax = 0.00f;
    this->ChargeTimeMin = 0.00f;
}

void UBAN_GSTriggerChargeSkill::GSNotifyCS_Implementation(FUStGSNotifyParam NotifyParam) const {
}

void UBAN_GSTriggerChargeSkill::GSValidateInputCS_Implementation(AActor* Actor) const {
}

bool UBAN_GSTriggerChargeSkill::bIsNativeBranchingPointCS_Implementation() const {
    return false;
}


