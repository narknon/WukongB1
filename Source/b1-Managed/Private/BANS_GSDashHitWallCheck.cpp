#include "BANS_GSDashHitWallCheck.h"

UBANS_GSDashHitWallCheck::UBANS_GSDashHitWallCheck() {
    this->HitWallStiffAM = NULL;
    this->IsRenderDebugShape = false;
}

void UBANS_GSDashHitWallCheck::GSNotifyEndCS_Implementation(FUStGSNotifyParam NotifyParam) const {
}

void UBANS_GSDashHitWallCheck::GSNotifyTickCS_Implementation(FUStGSNotifyParam NotifyParam, float FrameDeltaTime) const {
}

void UBANS_GSDashHitWallCheck::GSNotifyBeginCS_Implementation(FUStGSNotifyParam NotifyParam, float TotalDuration) const {
}


