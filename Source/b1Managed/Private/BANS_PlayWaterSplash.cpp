#include "BANS_PlayWaterSplash.h"

UBANS_PlayWaterSplash::UBANS_PlayWaterSplash() {
    this->MappingID = 0;
    this->SweepRadius = 50.00f;
    this->WeaponIndex = -1;
    this->bDrawDebug = false;
}

void UBANS_PlayWaterSplash::GSNotifyEndCS_Implementation(FUStGSNotifyParam NotifyParam) const {
}

void UBANS_PlayWaterSplash::GSNotifyTickCS_Implementation(FUStGSNotifyParam NotifyParam, float FrameDeltaTime) const {
}

void UBANS_PlayWaterSplash::GSNotifyBeginCS_Implementation(FUStGSNotifyParam NotifyParam, float TotalDuration) const {
}


