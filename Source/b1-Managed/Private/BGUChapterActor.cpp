#include "BGUChapterActor.h"

ABGUChapterActor::ABGUChapterActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->IsCheckBorder = false;
    this->CameraShake = NULL;
    this->CameraShakeScaleBase = 0.00f;
    this->CameraRoamPowerMax = 0.00f;
    this->CameraRoamPowerCoe = 0.00f;
    this->CameraRoamPowerCoe_Gamepad = 0.00f;
    this->CameraScalePowerCoe = 0.00f;
    this->CameraRoamAccelerationCoe = 0.00f;
    this->CameraRoamDecelerationCoe = 0.00f;
    this->CameraBorderDecelerationCoe = 0.00f;
    this->CameraRoamPowerDirSpeed = 0.00f;
    this->FocusDistaceBase = 0.00f;
    this->CheckCameraRoamBorderDis = 0.00f;
    this->CameraLightBase = 0.00f;
    this->CameraLightRandomTime = 0.00f;
    this->StayTimeBeforeNear = 0.00f;
    this->NearDistance = 0.00f;
    this->NearSpeed = 0.00f;
}


