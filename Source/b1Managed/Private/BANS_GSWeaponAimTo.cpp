#include "BANS_GSWeaponAimTo.h"

UBANS_GSWeaponAimTo::UBANS_GSWeaponAimTo() {
    this->AimToType = AimToType::Target;
    this->BlendInTime = 0.00f;
    this->BlendOutTime = 0.00f;
    this->TraceSpd = 0.00f;
    this->DegreesConstraint = 0.00f;
    this->EnableDebug = false;
}

void UBANS_GSWeaponAimTo::GSNotifyEndCS_Implementation(FUStGSNotifyParam NotifyParam) const {
}

void UBANS_GSWeaponAimTo::GSNotifyBeginCS_Implementation(FUStGSNotifyParam NotifyParam, float TotalDuration) const {
}


