#include "BANS_SweepHitSceneItems.h"

UBANS_SweepHitSceneItems::UBANS_SweepHitSceneItems() {
    this->BulletID = 0;
    this->AimType = AimType::NONE;
}

void UBANS_SweepHitSceneItems::GSNotifyEndCS_Implementation(FUStGSNotifyParam NotifyParam) const {
}

void UBANS_SweepHitSceneItems::GSNotifyTickCS_Implementation(FUStGSNotifyParam NotifyParam, float FrameDeltaTime) const {
}

void UBANS_SweepHitSceneItems::GSNotifyBeginCS_Implementation(FUStGSNotifyParam NotifyParam, float TotalDuration) const {
}


