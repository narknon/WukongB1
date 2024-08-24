#include "BAN_GSDetachMultipleWeapons.h"

UBAN_GSDetachMultipleWeapons::UBAN_GSDetachMultipleWeapons() {
    this->DetachmentLocationRule = EDetachmentRule::KeepWorld;
    this->DetachmentRotationRule = EDetachmentRule::KeepWorld;
    this->DetachmentScaleRule = EDetachmentRule::KeepWorld;
    this->IsEnableInteract = false;
    this->DestroyDelayTime = 0.00f;
}

void UBAN_GSDetachMultipleWeapons::GSNotifyCS_Implementation(FUStGSNotifyParam NotifyParam) const {
}

bool UBAN_GSDetachMultipleWeapons::bIsNativeBranchingPointCS_Implementation() const {
    return false;
}


