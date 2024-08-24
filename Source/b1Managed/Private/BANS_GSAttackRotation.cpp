#include "BANS_GSAttackRotation.h"

UBANS_GSAttackRotation::UBANS_GSAttackRotation() {
    this->IsRotateTraceCurrentTarget = true;
    this->IsRotateTraceSceneItem = false;
    this->NeedFindSceneItem = false;
    this->MinDistance = 0.00f;
    this->MaxDistance = 0.00f;
    this->FindSceneItemWay = FindSceneItemWay::FindNearest;
    this->Angle = 0.00f;
    this->NeedRemoveCurrentCatch = false;
    this->IsRotateTraceRegisteredPointCache = false;
    this->OverlayRotateTraceTargetType = ChangeTargetType::None;
    this->PointsRegisterID = 0;
    this->RotateSpeed = 0.00f;
    this->RotateDirection = RotateDirection::Auto;
    this->MaxRotateAngle = 0.00f;
    this->bStillRotateWhenAboveMaxRotateAngle = false;
    this->RotateDeflectionAngle = 0.00f;
    this->DeadzoneAngle = 0.00f;
    this->FootType = EBUHandFootType::None;
    this->IsRotateAroundLoc = false;
    this->EnableDebug = false;
    this->IsNeedForceRotateToSceneItemInEnd = true;
}

bool UBANS_GSAttackRotation::MarkDirty() const {
    return false;
}

void UBANS_GSAttackRotation::GSNotifyEndCS_Implementation(FUStGSNotifyParam NotifyParam) const {
}

void UBANS_GSAttackRotation::GSNotifyBeginCS_Implementation(FUStGSNotifyParam NotifyParam, float TotalDuration) const {
}

bool UBANS_GSAttackRotation::GSAllowCrossSection_Implementation() const {
    return false;
}

void UBANS_GSAttackRotation::GSOnSectionManuallyChanged_Implementation(ABGUCharacter* OwnerChar, float RemainingDuration) const {
}


