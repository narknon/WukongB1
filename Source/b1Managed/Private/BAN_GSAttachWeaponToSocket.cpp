#include "BAN_GSAttachWeaponToSocket.h"

UBAN_GSAttachWeaponToSocket::UBAN_GSAttachWeaponToSocket() {
    this->WeaponIndex = 0;
    this->AttachmentLocationRule = EAttachmentRule::SnapToTarget;
    this->AttachmentRotationRule = EAttachmentRule::SnapToTarget;
    this->AttachmentScaleRule = EAttachmentRule::KeepRelative;
    this->WeaponNeedPlayAnim = false;
    this->AnimAsset = NULL;
    this->WeaponScaleUseCurve = false;
    this->WeaponScaleCurve = NULL;
    this->WeaponNeedDoCallBP = false;
    this->WeaponCallBPFloatParam = 0.00f;
}

void UBAN_GSAttachWeaponToSocket::GSNotifyCS_Implementation(FUStGSNotifyParam NotifyParam) const {
}

bool UBAN_GSAttachWeaponToSocket::bIsNativeBranchingPointCS_Implementation() const {
    return false;
}


