#include "BGUCharacterMovementComponent.h"

UBGUCharacterMovementComponent::UBGUCharacterMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bWalkOnDitch = false;
    this->JumpOff_GravityScale_Config = 0.40f;
    this->JumpOff_GravityScaleResetTime = 0.40f;
    this->JumpOff_TestTickTime = 0.40f;
    this->JumpOff_XYMaxSpeed = 600.00f;
    this->JumpOff_ZAddtionalVelocity = 100.00f;
    this->JumpOff_XYMaxSpeedAddtionalScale = 0.50f;
    this->JumpOff_XYBaseCapsuelAddtionalScale = 3.00f;
    this->JumpOff_GravityScaleResetTimer = -1.00f;
    this->bImmediateUpdateRootMotion = true;
    this->bOnMovingPlatform = false;
    this->bEnableSimplifiedMove = false;
    this->CanSwitchToNavWalkCD = 2;
    this->CanSwitchToNavWalkMaxCD = 10;
    this->NavWalkCanStepHeight = 80.00f;
    this->NavWalkFallingHight = -70.00f;
    this->LastDesireDeltaFloorZ = 0.00f;
    this->CapsuleRadiusRayExtraAdditiveScale = 0.50f;
    this->NavWalkOptLevel = -2;
    this->XYMoveCenterBlockTriggerRollBackCapsuleScale = 0.70f;
    this->XYMoveSideBlockTriggerRollBackCapsuleScale = 0.40f;
    this->bNavWalkOpt_MassiveOpt = false;
    this->bOverridePhysWalkingParam = true;
    this->NavWalkCanStepAngel = 60.00f;
    this->bJumpOff = false;
    this->NavWalkCanStepDotValue = 0.00f;
    this->NavWalkCanStepCapsuelHeightScale = 0.40f;
    this->NavWalkCapsuelStepLinTraceZOffsetFromCenter = -1.00f;
    this->bNavWalkDebugEnable = false;
    this->bForceOrgNavWalk = false;
    this->bEnableCheckFloor = true;
    this->SimplePhysWalkCollisionRadius = 40.00f;
    this->SimplePhysWalkStartPenetratingRollBack = 10.00f;
    this->SimplePhysWalkStartPenetratingMaxRollBack = 40.00f;
    this->bEnableSimplePhysWalkCollision = false;
    this->OptimizeDistanceLevel1 = 0.00f;
    this->FinalNavWalkOptDistanceLevel1 = 0.00f;
    this->OptimizeDistanceLevel2 = 0.00f;
    this->FinalNavWalkOptDistanceLevel2 = 0.00f;
    this->bCanOptimizeFromCS = false;
    this->bIsPatrolling = false;
    this->bIsInBattle = false;
    this->bEnableBlendAnimRootMotion = false;
    this->bReplicateRootMotionMove = false;
    this->bDisableRootMotionFollowMode = false;
    this->bIsInFollowState = false;
    this->FollowClampDistanceOverride = 0.00f;
    this->DefaultFollowClampDistance = 0.00f;
    this->bEnablePrediction = false;
    this->PredictionTime = 2.00f;
    this->PredictionPointNum = 10;
    this->bIsAI = false;
    this->MovementModeChangeTimeInOneFrame = 0;
    this->MovementModeChangeTimeInOneFrame_MutilTimes = 0;
    this->MoveStartHistoryZDeltaNum_NavWalkOpt = 4;
    this->MoveEndHistoryZDeltaNum_NavWalkOpt = 4;
    this->ZDeltaThrehold_NavWalkOpt = 5.00f;
    this->FloorZSlopeDeltaThrehold_Anisotropy = 0.50f;
    this->FloorZSlopeDeltaThrehold_Syntropy = 1.00f;
    this->CurFloorZAdditionalWeight = 1;
    this->FloorZTraceStartScaleShrink = 0.30f;
    this->FloorTestCapsuleRadiusScale = 1.00f;
    this->DebugLength = 2000.00f;
    this->DebugSingleStep = 20.00f;
    this->PredictionTrajectoryTransforms.AddDefaulted(10);
    this->TopZInFalling = -340282346638528859811704183484516925440.00f;
    this->SwitchToNavWalkCumulateTime = 0.00f;
}

int32 UBGUCharacterMovementComponent::TryGetCurSurfaceTypeFromMovement() {
    return 0;
}

FVector UBGUCharacterMovementComponent::TryGetCurNormalFromMovement() {
    return FVector{};
}

FVector UBGUCharacterMovementComponent::TryGetCurHitPointFromMovement() {
    return FVector{};
}

void UBGUCharacterMovementComponent::SetWalkOnDitch(bool bDitch) const {
}

void UBGUCharacterMovementComponent::SetUseSeparateBrakingFriction(bool bUse) {
}

void UBGUCharacterMovementComponent::SetSwitchToNavWalkCumulateTime(float Time) {
}

void UBGUCharacterMovementComponent::SetOnMovingPlatform(bool bIsOnMovingPlatform) {
}

void UBGUCharacterMovementComponent::SetNavWalkOptMassiveMode(bool bMassiveOpt) {
}

void UBGUCharacterMovementComponent::SetNavWalkOptLevel(int32 NewLevel) {
}

void UBGUCharacterMovementComponent::SetJumpOffState(bool JumpOff) const {
}

void UBGUCharacterMovementComponent::SetGravityToJumpOffGravity() {
}

void UBGUCharacterMovementComponent::SetEnableSimplePhysWalkCollision(bool bEnable) {
}

void UBGUCharacterMovementComponent::SetDisableNavWalkOptByWhiteList(bool bDisable) {
}

void UBGUCharacterMovementComponent::SetCustomJumpVelocityIncrement(float VelocityIncrement) {
}

void UBGUCharacterMovementComponent::ResetGravityToNormalGravity() {
}

void UBGUCharacterMovementComponent::MoveUpdateHitMove(const FVector& Delta) {
}

void UBGUCharacterMovementComponent::LaunchVelocityZ(float VelocityZ) {
}

bool UBGUCharacterMovementComponent::IsWalkOnDitch() const {
    return false;
}

bool UBGUCharacterMovementComponent::IsUseSeparateBrakingFriction() {
    return false;
}

bool UBGUCharacterMovementComponent::IsInNavWalkOptMode() const {
    return false;
}

bool UBGUCharacterMovementComponent::IsInJumpOffAdjust() const {
    return false;
}

bool UBGUCharacterMovementComponent::HasAnimRootMotion_CS() {
    return false;
}

float UBGUCharacterMovementComponent::GetTopZInFalling() {
    return 0.0f;
}

void UBGUCharacterMovementComponent::CustomJumpMoveBreak() {
}

void UBGUCharacterMovementComponent::ClearTopZInFalling() {
}

bool UBGUCharacterMovementComponent::CanGetNormalAndSurfaceTypeInfoFromMovement() {
    return false;
}


