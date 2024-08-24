#include "BANS_GSPlayCameraShake.h"

UBANS_GSPlayCameraShake::UBANS_GSPlayCameraShake() {
    this->CameraShake = NULL;
    this->CamShakeScaleByDistCurve = NULL;
    this->EpicenterIsAttach = false;
    this->StopWhenNotifyEnded = true;
    this->Stop_Immediately = true;
    this->bDisableWhenViewTargetIsntPlayer = false;
}

void UBANS_GSPlayCameraShake::GSNotifyEndCS_Implementation(FUStGSNotifyParam NotifyParam) const {
}

void UBANS_GSPlayCameraShake::GSNotifyTickCS_Implementation(FUStGSNotifyParam NotifyParam, float FrameDeltaTime) const {
}

void UBANS_GSPlayCameraShake::GSNotifyBeginCS_Implementation(FUStGSNotifyParam NotifyParam, float TotalDuration) const {
}


