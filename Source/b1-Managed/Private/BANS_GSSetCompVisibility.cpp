#include "BANS_GSSetCompVisibility.h"

UBANS_GSSetCompVisibility::UBANS_GSSetCompVisibility() {
    this->ForOwnerActor = false;
    this->ForWeaponActor = false;
    this->IsVisible = false;
    this->NeedRecoverInEnd = false;
}

void UBANS_GSSetCompVisibility::GSNotifyEndCS_Implementation(FUStGSNotifyParam NotifyParam) const {
}

void UBANS_GSSetCompVisibility::GSNotifyTickCS_Implementation(FUStGSNotifyParam NotifyParam, float FrameDeltaTime) const {
}

void UBANS_GSSetCompVisibility::GSNotifyBeginCS_Implementation(FUStGSNotifyParam NotifyParam, float TotalDuration) const {
}


