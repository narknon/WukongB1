#include "BANS_GSAttackRotationForUpperBody.h"

UBANS_GSAttackRotationForUpperBody::UBANS_GSAttackRotationForUpperBody() {
    this->CanUseQueuedType = true;
    this->TargetType = EBTTargetType::Target;
}

void UBANS_GSAttackRotationForUpperBody::GSNotifyEndCS_Implementation(FUStGSNotifyParam NotifyParam) const {
}

void UBANS_GSAttackRotationForUpperBody::GSNotifyBeginCS_Implementation(FUStGSNotifyParam NotifyParam, float TotalDuration) const {
}


