#include "BANS_GSBlendPhysicForDeath.h"

UBANS_GSBlendPhysicForDeath::UBANS_GSBlendPhysicForDeath() {
    this->EnableWeaponAutoSwitchPhysic = false;
}

void UBANS_GSBlendPhysicForDeath::GSNotifyBeginCS_Implementation(FUStGSNotifyParam NotifyParam, float TotalDuration) const {
}


