#include "BAN_SpawnLightningFXActor_MultiSockets.h"

UBAN_SpawnLightningFXActor_MultiSockets::UBAN_SpawnLightningFXActor_MultiSockets() {
    this->Template = NULL;
    this->LocationRule = EAttachmentRule::SnapToTarget;
    this->RotationRule = EAttachmentRule::SnapToTarget;
    this->ScaleRule = EAttachmentRule::KeepRelative;
    this->EQSReqID = 0;
}

void UBAN_SpawnLightningFXActor_MultiSockets::GSNotifyCS_Implementation(FUStGSNotifyParam NotifyParam) const {
}


