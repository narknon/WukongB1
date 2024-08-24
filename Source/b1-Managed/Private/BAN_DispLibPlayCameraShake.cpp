#include "BAN_DispLibPlayCameraShake.h"

UBAN_DispLibPlayCameraShake::UBAN_DispLibPlayCameraShake() {
    this->EditorActive = false;
    this->Delay = 0.00f;
    this->CameraShake = NULL;
    this->Override_Oscillation_Duration = 0.00f;
    this->ForceApply = false;
    this->UseDistanceDamping = false;
    this->AttachedTarget = false;
    this->CamShakeScaleByDistCurve = NULL;
    this->MaxDistance = 0.00f;
}

void UBAN_DispLibPlayCameraShake::GSNotifyCS_Implementation(FUStGSNotifyParam NotifyParam) const {
}


