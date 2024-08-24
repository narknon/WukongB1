#include "BANS_GSModifyDestructible.h"

UBANS_GSModifyDestructible::UBANS_GSModifyDestructible() {
    this->CanBePlacedInASCS = true;
    this->CanUseQueuedType = true;
    this->ModifyType = EGSDestructibleModifyType::Break;
    this->ImpulseType = EGSHitDestructibleImpulseType::Default;
    this->ImpulseStrengthLevel = EGSHitDestructibleStrengthLevel::None;
    this->ImpulseStrength = 0.00f;
    this->MassLevel = DestructibleMassLevel::Basic;
    this->StrengthLevel = DestructibleStrengthLevel::LightHitDestroy;
}

void UBANS_GSModifyDestructible::GSNotifyEndCS_Implementation(FUStGSNotifyParam NotifyParam) const {
}

void UBANS_GSModifyDestructible::GSNotifyTickCS_Implementation(FUStGSNotifyParam NotifyParam, float FrameDeltaTime) const {
}

void UBANS_GSModifyDestructible::GSNotifyBeginCS_Implementation(FUStGSNotifyParam NotifyParam, float TotalDuration) const {
}


