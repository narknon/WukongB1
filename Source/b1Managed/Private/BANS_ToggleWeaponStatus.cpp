#include "BANS_ToggleWeaponStatus.h"

UBANS_ToggleWeaponStatus::UBANS_ToggleWeaponStatus() {
    this->TriggerShowFirst = false;
}

void UBANS_ToggleWeaponStatus::GSNotifyEndCS_Implementation(FUStGSNotifyParam NotifyParam) const {
}

void UBANS_ToggleWeaponStatus::GSNotifyBeginCS_Implementation(FUStGSNotifyParam NotifyParam, float TotalDuration) const {
}


