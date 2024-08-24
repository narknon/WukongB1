#include "BANS_GSHitMoveCollisionScale.h"

UBANS_GSHitMoveCollisionScale::UBANS_GSHitMoveCollisionScale() {
    this->UpdateCurve = NULL;
    this->NeedUpdateScale = true;
    this->NeedSetRelaLocForScale = true;
    this->NeedUpdateRadius = false;
    this->HitMoveDir = HitMoveDir::Default;
}

void UBANS_GSHitMoveCollisionScale::GSNotifyEndCS_Implementation(FUStGSNotifyParam NotifyParam) const {
}

void UBANS_GSHitMoveCollisionScale::GSNotifyBeginCS_Implementation(FUStGSNotifyParam NotifyParam, float TotalDuration) const {
}


