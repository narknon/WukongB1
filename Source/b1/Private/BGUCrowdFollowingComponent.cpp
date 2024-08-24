#include "BGUCrowdFollowingComponent.h"

UBGUCrowdFollowingComponent::UBGUCrowdFollowingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RotationSpeed = 0.00f;
    this->bPause = false;
    this->DesiredAngleDelta = 0.00f;
    this->YawDelta = 0.00f;
    this->SpeedLimit = 0.00f;
    this->RotationSpeedMax = 80.00f;
    this->RotationSpeedAcc = 160.00f;
    this->bSupportFlock = false;
}

void UBGUCrowdFollowingComponent::SetCrowdFollowingParam(float fSeparationWeight, float fCollisionQueryRange, float fPathOptimizationRange, int32 iAvoidanceQualityLevel) {
}

void UBGUCrowdFollowingComponent::SetCrowdFollowingEnabled(bool bEnabled, bool bIsObstacle) {
}


