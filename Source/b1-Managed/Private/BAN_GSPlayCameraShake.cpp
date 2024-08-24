#include "BAN_GSPlayCameraShake.h"

UBAN_GSPlayCameraShake::UBAN_GSPlayCameraShake() {
    this->CameraShake = NULL;
    this->CamShakeScaleByDistCurve = NULL;
    this->EpicenterIsAttach = false;
    this->bDisableWhenViewTargetIsntPlayer = false;
}

void UBAN_GSPlayCameraShake::GSNotifyCS_Implementation(FUStGSNotifyParam NotifyParam) const {
}


