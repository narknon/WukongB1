#include "BAN_GSSetCompVisibility.h"

UBAN_GSSetCompVisibility::UBAN_GSSetCompVisibility() {
    this->ForOwnerActor = false;
    this->ForWeaponActor = false;
    this->CompClass = NULL;
    this->IsVisible = false;
}

void UBAN_GSSetCompVisibility::GSNotifyCS_Implementation(FUStGSNotifyParam NotifyParam) const {
}

bool UBAN_GSSetCompVisibility::bIsNativeBranchingPointCS_Implementation() const {
    return false;
}


