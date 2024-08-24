#include "BAN_SpawnLightningFXActor.h"

UBAN_SpawnLightningFXActor::UBAN_SpawnLightningFXActor() {
    this->LocationRule = EAttachmentRule::SnapToTarget;
    this->RotationRule = EAttachmentRule::SnapToTarget;
    this->ScaleRule = EAttachmentRule::KeepRelative;
    this->GetPointsType = PointsGenType::ByEQS_Async;
    this->EQSReqID = 0;
}

void UBAN_SpawnLightningFXActor::GSNotifyCS_Implementation(FUStGSNotifyParam NotifyParam) const {
}

TArray<FSoftObjectPath> UBAN_SpawnLightningFXActor::GetSoftReferences_Implementation() const {
    return TArray<FSoftObjectPath>();
}


