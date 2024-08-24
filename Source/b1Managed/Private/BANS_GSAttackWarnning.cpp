#include "BANS_GSAttackWarnning.h"

UBANS_GSAttackWarnning::UBANS_GSAttackWarnning() {
    this->HitActionDir = HitActionDir::Default;
    this->HitLevel = 0;
    this->WeaponIndex = -1;
    this->IsRenderDebugShape = false;
    this->ResultFilterType = ESweepCheckHitFilterType::Zero;
    this->AttackWarningGroupID = -1;
}

void UBANS_GSAttackWarnning::GSNotifyEndCS_Implementation(FUStGSNotifyParam NotifyParam) const {
}

void UBANS_GSAttackWarnning::GSNotifyTickCS_Implementation(FUStGSNotifyParam NotifyParam, float FrameDeltaTime) const {
}

void UBANS_GSAttackWarnning::GSNotifyBeginCS_Implementation(FUStGSNotifyParam NotifyParam, float TotalDuration) const {
}


