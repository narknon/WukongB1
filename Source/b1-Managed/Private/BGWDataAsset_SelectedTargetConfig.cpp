#include "BGWDataAsset_SelectedTargetConfig.h"

UBGWDataAsset_SelectedTargetConfig::UBGWDataAsset_SelectedTargetConfig() {
    this->SelectedRange = 200.00f;
    this->SelectedMaxMoveSpeed = 100.00f;
    this->SelectedMinMoveSpeed = 100.00f;
    this->SelectFollowMoveSpeed = 3000.00f;
    this->GamepadSelectRotateSpeed = 300.00f;
    this->GamepadFollowRotateSpeed = 1000.00f;
    this->FollowMoveTime = 0.20f;
    this->MinChangeAngle = 0.10f;
    this->MeleGamepadSelectedAngle = 120.00f;
    this->MeleMouseSelectedAngle = 120.00f;
    this->RangedGamepadSelectedAngle = 30.00f;
    this->RangedMouseSelectedAngle = 30.00f;
}


