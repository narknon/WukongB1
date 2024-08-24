#include "BANS_GSTouchItem.h"

UBANS_GSTouchItem::UBANS_GSTouchItem() {
    this->BlendInTime = 0.00f;
    this->BlendOutTime = 0.00f;
    this->TouchIKType = TouchIKType::LeftHand;
    this->FindActorRadius = 300.00f;
    this->bUseFullBodyIK = false;
    this->bUseIKPositionOffset = false;
    this->OffsetCurve = NULL;
}

void UBANS_GSTouchItem::GSNotifyEndCS_Implementation(FUStGSNotifyParam NotifyParam) const {
}

void UBANS_GSTouchItem::GSNotifyTickCS_Implementation(FUStGSNotifyParam NotifyParam, float FrameDeltaTime) const {
}

void UBANS_GSTouchItem::GSNotifyBeginCS_Implementation(FUStGSNotifyParam NotifyParam, float TotalDuration) const {
}


