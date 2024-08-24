#include "BGWDataAsset_TakePhotoSystemConfig.h"

UBGWDataAsset_TakePhotoSystemConfig::UBGWDataAsset_TakePhotoSystemConfig() {
    this->IsKeepLocalMove = false;
    this->CameraMoveableDistance = 0.00f;
    this->CameraMoveableHeight = 0.00f;
    this->MouseFixedResistance = 0.00f;
    this->IsTurnImmediately = false;
    this->MouseYawRotationFactor = 0.00f;
    this->MousePitchRotationFactor = 0.00f;
    this->RotateSpeed_LR = 0.00f;
    this->RotateSpeed_UD = 0.00f;
    this->PhysicsAssetCheckRange = 0.00f;
    this->EnterEnhancedTime = 0.00f;
    this->ShortcutInputAction = NULL;
    this->TakePhotoActor_BP = NULL;
}


