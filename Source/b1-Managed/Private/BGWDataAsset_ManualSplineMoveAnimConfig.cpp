#include "BGWDataAsset_ManualSplineMoveAnimConfig.h"

UBGWDataAsset_ManualSplineMoveAnimConfig::UBGWDataAsset_ManualSplineMoveAnimConfig() {
    this->BeginMoveDBC = NULL;
    this->EndMoveDBC = NULL;
    this->MovingDBC = NULL;
    this->CameraType = ManualSplineMoveCameraType::None;
    this->RotationBlendTime = 0.00f;
    this->DirectionType = ManualSplineMoveDirectionType::Free;
    this->LockDirectionDeltaAngle = 0.00f;
    this->MaxWalkSpeed = 0.00f;
    this->MaxAcceleration = 0.00f;
    this->AMBeginMove = NULL;
    this->AMEndMoveForward = NULL;
    this->AMEndMoveBackward = NULL;
    this->ASIdleForward = NULL;
    this->ASIdleBackward = NULL;
    this->ASStartForward = NULL;
    this->ASStartBackward = NULL;
    this->ASLoopForward = NULL;
    this->ASLoopBackward = NULL;
    this->ASStopForward = NULL;
    this->ASStopBackward = NULL;
    this->ASTurnF2B = NULL;
    this->ASTurnB2F = NULL;
}


