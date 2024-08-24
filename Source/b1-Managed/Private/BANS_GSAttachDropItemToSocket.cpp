#include "BANS_GSAttachDropItemToSocket.h"

UBANS_GSAttachDropItemToSocket::UBANS_GSAttachDropItemToSocket() {
    this->AttachmentLocationRule = EAttachmentRule::SnapToTarget;
    this->AttachmentRotationRule = EAttachmentRule::SnapToTarget;
    this->AttachmentScaleRule = EAttachmentRule::KeepRelative;
    this->ScaleUseCurve = false;
    this->ScaleCurve = NULL;
    this->CallBPFunc = false;
    this->CallBPFloatParam = 0.00f;
    this->TriggerEffect = false;
    this->TriggerEffectDelay = 0.00f;
    this->InteractItem = NULL;
}

void UBANS_GSAttachDropItemToSocket::GSNotifyEndCS_Implementation(FUStGSNotifyParam NotifyParam) const {
}

void UBANS_GSAttachDropItemToSocket::GSNotifyBeginCS_Implementation(FUStGSNotifyParam NotifyParam, float TotalDuration) const {
}


