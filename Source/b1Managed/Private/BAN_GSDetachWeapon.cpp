#include "BAN_GSDetachWeapon.h"

UBAN_GSDetachWeapon::UBAN_GSDetachWeapon() {
    this->WeaponIndex = 0;
    this->DetachmentLocationRule = EDetachmentRule::KeepWorld;
    this->DetachmentRotationRule = EDetachmentRule::KeepWorld;
    this->DetachmentScaleRule = EDetachmentRule::KeepWorld;
    this->IsEnableInteract = false;
    this->DestroyDelayTime = 0.00f;
}

void UBAN_GSDetachWeapon::GSNotifyCS_Implementation(FUStGSNotifyParam NotifyParam) const {
}

bool UBAN_GSDetachWeapon::bIsNativeBranchingPointCS_Implementation() const {
    return false;
}


