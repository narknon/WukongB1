#include "BANS_GSMatchingTransform.h"

UBANS_GSMatchingTransform::UBANS_GSMatchingTransform() {
    this->IsNeedForceMatchingInEnd = true;
    this->IsUseSceneItemToMatchingTransfrom = true;
    this->NeedFindSceneItem = false;
    this->MinDistance = 0.00f;
    this->MaxDistance = 0.00f;
    this->FindSceneItemWay = FindSceneItemWay::FindNearest;
    this->Angle = 0.00f;
    this->NeedRemoveCurrentCatch = false;
    this->IsRotatorToItem = false;
    this->EnableBow = true;
    this->EnableZAxisMove = false;
    this->IgnoreLocation = false;
    this->IgnoreRotation = false;
    this->EnableDrawDebug = false;
}

void UBANS_GSMatchingTransform::GSNotifyEndCS_Implementation(FUStGSNotifyParam NotifyParam) const {
}

void UBANS_GSMatchingTransform::GSNotifyBeginCS_Implementation(FUStGSNotifyParam NotifyParam, float TotalDuration) const {
}


