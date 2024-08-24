#include "Bezier_MovementComponentInCS.h"

UBezier_MovementComponentInCS::UBezier_MovementComponentInCS(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RotateSpeed = 0.00f;
    this->InitFlySpeed = 0.00f;
    this->destroyTime = 0.00f;
    this->BezierPathPointNum = 0;
    this->BezierMoveWeight = 0.00f;
    this->MaxFlySpeed = 0.00f;
    this->AccelerationTime = 0.00f;
    this->ApproachDis = 0.00f;
    this->EnableDrawDebugPoint = false;
    this->SpeedCurve = NULL;
    this->ProjectileMovement = NULL;
}

void UBezier_MovementComponentInCS::InitMovementParam(float _RotateSpeed, float _FlySpeed, float _DestroyTime, float _MaxFlySpeed, int32 _BezierPathPointNum, float _BezierMoveWeight, float _AccelerationTime, float _ApproachDis, bool _EnableDrawDebugPoint, UCurveFloat* _SpeedCurve, FVector _ControlAdditionPoint1, FVector _ControlAdditionPoint2) {
}

void UBezier_MovementComponentInCS::ReceiveTick_Implementation(float DeltaSeconds) {
}

void UBezier_MovementComponentInCS::ReceiveBeginPlay_Implementation() {
}


