#include "BUAnimHumanoidCS_AdvancedMonsterLocomotion.h"

UBUAnimHumanoidCS_AdvancedMonsterLocomotion::UBUAnimHumanoidCS_AdvancedMonsterLocomotion() {
    this->FreeMode = ELMFreeMode::Normal;
    this->LockMode = ELMLockMode::Normal;
    this->StartAngle = 0.00f;
    this->StrideWarpingStartAlpha = 0.00f;
    this->StrideWarpingLoopAlpha = 0.00f;
    this->StrideWarpingTurnAlpha = 0.00f;
    this->MoveLoopSpine01AngleOffset = 0.00f;
    this->MoveLoopSpine02AngleOffset = 0.00f;
    this->MoveLoopSpine03AngleOffset = 0.00f;
    this->MoveLoopHeadAngleOffset = 0.00f;
    this->MoveLoopPelvisLocalOffset = 0.00f;
    this->MoveLoopPelvisAngleOffset = 0.00f;
    this->ASWalkStartFwd = NULL;
    this->ASWalkStartBwd = NULL;
    this->ASWalkStartLeftMin = NULL;
    this->ASWalkStartLeftMax = NULL;
    this->ASWalkStartRightMin = NULL;
    this->ASWalkStartRightMax = NULL;
    this->ASWalkStartLF = NULL;
    this->ASWalkStartLB = NULL;
    this->ASWalkStartRF = NULL;
    this->ASWalkStartRB = NULL;
    this->ASWalkLoopFwd = NULL;
    this->ASWalkLoopBwd = NULL;
    this->ASWalkLoopLF = NULL;
    this->ASWalkLoopLB = NULL;
    this->ASWalkLoopRF = NULL;
    this->ASWalkLoopRB = NULL;
    this->ASWalkSharpturnLeftMin = NULL;
    this->ASWalkSharpturnLeftMax = NULL;
    this->ASWalkSharpturnRightMin = NULL;
    this->ASWalkSharpturnRightMax = NULL;
    this->ASWalkPivotFwd = NULL;
    this->ASWalkPivotBwd = NULL;
    this->ASWalkPivotLF = NULL;
    this->ASWalkPivotLB = NULL;
    this->ASWalkPivotRF = NULL;
    this->ASWalkPivotRB = NULL;
    this->ASWalkTransFRToBR = NULL;
    this->ASWalkTransBRToFR = NULL;
    this->ASWalkTransFLToBL = NULL;
    this->ASWalkTransBLToFL = NULL;
    this->ASWalkStopFwd = NULL;
    this->ASWalkStopBwd = NULL;
    this->ASWalkStopLF = NULL;
    this->ASWalkStopLB = NULL;
    this->ASWalkStopRF = NULL;
    this->ASWalkStopRB = NULL;
    this->ASWalkLoopAddPose = NULL;
    this->ASRunStartFwd = NULL;
    this->ASRunStartBwd = NULL;
    this->ASRunStartLeftMin = NULL;
    this->ASRunStartLeftMax = NULL;
    this->ASRunStartRightMin = NULL;
    this->ASRunStartRightMax = NULL;
    this->ASRunStartLF = NULL;
    this->ASRunStartLB = NULL;
    this->ASRunStartRF = NULL;
    this->ASRunStartRB = NULL;
    this->ASRunLoopFwd = NULL;
    this->ASRunLoopBwd = NULL;
    this->ASRunLoopLF = NULL;
    this->ASRunLoopLB = NULL;
    this->ASRunLoopRF = NULL;
    this->ASRunLoopRB = NULL;
    this->ASRunSharpturnLeftMin = NULL;
    this->ASRunSharpturnLeftMax = NULL;
    this->ASRunSharpturnRightMin = NULL;
    this->ASRunSharpturnRightMax = NULL;
    this->ASRunPivotFwd = NULL;
    this->ASRunPivotBwd = NULL;
    this->ASRunPivotLF = NULL;
    this->ASRunPivotLB = NULL;
    this->ASRunPivotRF = NULL;
    this->ASRunPivotRB = NULL;
    this->ASRunTransFRToBR = NULL;
    this->ASRunTransBRToFR = NULL;
    this->ASRunTransFLToBL = NULL;
    this->ASRunTransBLToFL = NULL;
    this->ASRunStopFwd = NULL;
    this->ASRunStopBwd = NULL;
    this->ASRunStopLF = NULL;
    this->ASRunStopLB = NULL;
    this->ASRunStopRF = NULL;
    this->ASRunStopRB = NULL;
    this->ASRunLoopAddPose = NULL;
    this->ASRushStartFwd = NULL;
    this->ASRushStartLeftMin = NULL;
    this->ASRushStartLeftMax = NULL;
    this->ASRushStartRightMin = NULL;
    this->ASRushStartRightMax = NULL;
    this->ASRushLoopFwd = NULL;
    this->ASRushSharpturnLeftMin = NULL;
    this->ASRushSharpturnLeftMax = NULL;
    this->ASRushSharpturnRightMin = NULL;
    this->ASRushSharpturnRightMax = NULL;
    this->ASRushStopFwd = NULL;
    this->ASRushLoopAddPose = NULL;
    this->AnimIdle = NULL;
    this->MappedSpeed = 0.00f;
    this->GaitGroundedState = GaitGroundedState::None;
    this->MoveGaitGroundedState = GaitGroundedState::None;
    this->SwitchingLockStateAngle = 0.00f;
    this->ActorSpineNum = 0;
    this->VelocityDeltaAngle = 0.00f;
    this->StopVelocityDeltaAngle = 0.00f;
    this->InputDeltaAngle = 0.00f;
    this->InputVelocityAngle = 0.00f;
    this->MoveSpeedLastUpdate = 0.00f;
    this->bPivotUseOrientationWarping = false;
    this->bUpdateAnimIdle = false;
    this->bSwitchToLock = false;
    this->bSwitchingLockState = false;
    this->bFreeStop = false;
    this->bLockStop = false;
    this->bSwitchingLockStateStop = false;
    this->bMoveToIdle = false;
    this->bStartToTrans = false;
    this->bFreeStartToTurn = false;
    this->bLockStartToTurn = false;
    this->bSwitchingFreeToTurn = false;
    this->bLockLoopToTurn = false;
    this->bLockTurnToLoop = false;
    this->bFreeLoopToTurn = false;
    this->bFreeMoveToTurn = false;
    this->bLockMoveToTurn = false;
    this->bMoveStartSwitch = false;
    this->bMoveTurnSwitch = false;
}

bool UBUAnimHumanoidCS_AdvancedMonsterLocomotion::ShouldToMove() {
    return false;
}

void UBUAnimHumanoidCS_AdvancedMonsterLocomotion::SetupIdleAnim(FAnimUpdateContext& Context, FAnimNodeReference& Node) {
}

void UBUAnimHumanoidCS_AdvancedMonsterLocomotion::SetupIdleOutput(FAnimUpdateContext& Context, FAnimNodeReference& Node) {
}

void UBUAnimHumanoidCS_AdvancedMonsterLocomotion::SetupMoveLoopAnim(FAnimUpdateContext& Context, FAnimNodeReference& Node) {
}

void UBUAnimHumanoidCS_AdvancedMonsterLocomotion::SetupMoveStopAnim(FAnimUpdateContext& Context, FAnimNodeReference& Node) {
}

void UBUAnimHumanoidCS_AdvancedMonsterLocomotion::SetupMoveTurnAnim(FAnimUpdateContext& Context, FAnimNodeReference& Node) {
}

bool UBUAnimHumanoidCS_AdvancedMonsterLocomotion::ShouldMoveLoopToBR() {
    return false;
}

bool UBUAnimHumanoidCS_AdvancedMonsterLocomotion::ShouldMoveLoopToBL() {
    return false;
}

bool UBUAnimHumanoidCS_AdvancedMonsterLocomotion::ShouldMoveLoopToFR() {
    return false;
}

bool UBUAnimHumanoidCS_AdvancedMonsterLocomotion::ShouldMoveLoopToFL() {
    return false;
}

void UBUAnimHumanoidCS_AdvancedMonsterLocomotion::SetupMoveStartAnim(FAnimUpdateContext& Context, FAnimNodeReference& Node) {
}

void UBUAnimHumanoidCS_AdvancedMonsterLocomotion::UpdateMoveStopAnim(FAnimUpdateContext& Context, FAnimNodeReference& Node) {
}

void UBUAnimHumanoidCS_AdvancedMonsterLocomotion::UpdateMoveTurnAnim(FAnimUpdateContext& Context, FAnimNodeReference& Node) {
}

void UBUAnimHumanoidCS_AdvancedMonsterLocomotion::SetupMoveTurnOutput(FAnimUpdateContext& Context, FAnimNodeReference& Node) {
}

void UBUAnimHumanoidCS_AdvancedMonsterLocomotion::SetupMoveStopOutput(FAnimUpdateContext& Context, FAnimNodeReference& Node) {
}

void UBUAnimHumanoidCS_AdvancedMonsterLocomotion::UpdateMoveStartAnim(FAnimUpdateContext& Context, FAnimNodeReference& Node) {
}

void UBUAnimHumanoidCS_AdvancedMonsterLocomotion::SetupMoveLoopOutput(FAnimUpdateContext& Context, FAnimNodeReference& Node) {
}

bool UBUAnimHumanoidCS_AdvancedMonsterLocomotion::ShouldMoveLoopToFwd() {
    return false;
}

bool UBUAnimHumanoidCS_AdvancedMonsterLocomotion::ShouldMoveLoopToBwd() {
    return false;
}

bool UBUAnimHumanoidCS_AdvancedMonsterLocomotion::ShouldMoveLoopBRToFR() {
    return false;
}

bool UBUAnimHumanoidCS_AdvancedMonsterLocomotion::ShouldMoveLoopFRToBR() {
    return false;
}

bool UBUAnimHumanoidCS_AdvancedMonsterLocomotion::ShouldMoveLoopFLToBL() {
    return false;
}

bool UBUAnimHumanoidCS_AdvancedMonsterLocomotion::ShouldMoveLoopLeftBR() {
    return false;
}

void UBUAnimHumanoidCS_AdvancedMonsterLocomotion::UpdateMoveTurnOutput(FAnimUpdateContext& Context, FAnimNodeReference& Node) {
}

bool UBUAnimHumanoidCS_AdvancedMonsterLocomotion::ShouldMoveLoopLeftFR() {
    return false;
}

bool UBUAnimHumanoidCS_AdvancedMonsterLocomotion::ShouldMoveLoopLeftFL() {
    return false;
}

void UBUAnimHumanoidCS_AdvancedMonsterLocomotion::UpdateMoveStopOutput(FAnimUpdateContext& Context, FAnimNodeReference& Node) {
}

void UBUAnimHumanoidCS_AdvancedMonsterLocomotion::UpdateMoveLoopOutput(FAnimUpdateContext& Context, FAnimNodeReference& Node) {
}

void UBUAnimHumanoidCS_AdvancedMonsterLocomotion::UpdateMoveLoopBRAnim(FAnimUpdateContext& Context, FAnimNodeReference& Node) {
}

void UBUAnimHumanoidCS_AdvancedMonsterLocomotion::UpdateMoveLoopBLAnim(FAnimUpdateContext& Context, FAnimNodeReference& Node) {
}

void UBUAnimHumanoidCS_AdvancedMonsterLocomotion::UpdateMoveLoopFRAnim(FAnimUpdateContext& Context, FAnimNodeReference& Node) {
}

void UBUAnimHumanoidCS_AdvancedMonsterLocomotion::UpdateMoveLoopFLAnim(FAnimUpdateContext& Context, FAnimNodeReference& Node) {
}

void UBUAnimHumanoidCS_AdvancedMonsterLocomotion::SetupMoveStartOutput(FAnimUpdateContext& Context, FAnimNodeReference& Node) {
}

bool UBUAnimHumanoidCS_AdvancedMonsterLocomotion::ShouldMoveLoopLeftBL() {
    return false;
}

bool UBUAnimHumanoidCS_AdvancedMonsterLocomotion::ShouldMoveLoopBLToFL() {
    return false;
}

bool UBUAnimHumanoidCS_AdvancedMonsterLocomotion::ShouldMoveLoopLeftBwd() {
    return false;
}

bool UBUAnimHumanoidCS_AdvancedMonsterLocomotion::ShouldMoveLoopLeftFwd() {
    return false;
}

void UBUAnimHumanoidCS_AdvancedMonsterLocomotion::UpdateMoveLoopFwdAnim(FAnimUpdateContext& Context, FAnimNodeReference& Node) {
}

void UBUAnimHumanoidCS_AdvancedMonsterLocomotion::UpdateMoveLoopBwdAnim(FAnimUpdateContext& Context, FAnimNodeReference& Node) {
}

bool UBUAnimHumanoidCS_AdvancedMonsterLocomotion::ShouldMoveLoopTransToFL() {
    return false;
}

bool UBUAnimHumanoidCS_AdvancedMonsterLocomotion::ShouldMoveLoopTransToFR() {
    return false;
}

bool UBUAnimHumanoidCS_AdvancedMonsterLocomotion::ShouldMoveLoopTransToBR() {
    return false;
}

void UBUAnimHumanoidCS_AdvancedMonsterLocomotion::UpdateMoveLoopTransAnim(FAnimUpdateContext& Context, FAnimNodeReference& Node) {
}

bool UBUAnimHumanoidCS_AdvancedMonsterLocomotion::ShouldMoveLoopTransToBL() {
    return false;
}

void UBUAnimHumanoidCS_AdvancedMonsterLocomotion::UpdateMoveLoopSimpleAnim(FAnimUpdateContext& Context, FAnimNodeReference& Node) {
}

bool UBUAnimHumanoidCS_AdvancedMonsterLocomotion::ShouldMoveTurnSwitchFree() {
    return false;
}

bool UBUAnimHumanoidCS_AdvancedMonsterLocomotion::ShouldMoveTurnSwitchLock() {
    return false;
}

void UBUAnimHumanoidCS_AdvancedMonsterLocomotion::SetupMoveLoopAdditiveAnim(FAnimUpdateContext& Context, FAnimNodeReference& Node) {
}

void UBUAnimHumanoidCS_AdvancedMonsterLocomotion::UpdateMoveLoopLB2LFOutput(FAnimUpdateContext& Context, FAnimNodeReference& Node) {
}

void UBUAnimHumanoidCS_AdvancedMonsterLocomotion::UpdateMoveLoopRB2RFOutput(FAnimUpdateContext& Context, FAnimNodeReference& Node) {
}

void UBUAnimHumanoidCS_AdvancedMonsterLocomotion::UpdateMoveLoopRF2RBOutput(FAnimUpdateContext& Context, FAnimNodeReference& Node) {
}

void UBUAnimHumanoidCS_AdvancedMonsterLocomotion::UpdateMoveLoopLF2LBOutput(FAnimUpdateContext& Context, FAnimNodeReference& Node) {
}

bool UBUAnimHumanoidCS_AdvancedMonsterLocomotion::ShouldMoveLoopLeftTransBR() {
    return false;
}

bool UBUAnimHumanoidCS_AdvancedMonsterLocomotion::ShouldMoveLoopLeftTransFL() {
    return false;
}

bool UBUAnimHumanoidCS_AdvancedMonsterLocomotion::ShouldMoveLoopLeftTransBL() {
    return false;
}

bool UBUAnimHumanoidCS_AdvancedMonsterLocomotion::ShouldMoveLoopLeftTransFR() {
    return false;
}

void UBUAnimHumanoidCS_AdvancedMonsterLocomotion::UpdateMoveLoopStateMachine(FAnimUpdateContext& Context, FAnimNodeReference& Node) {
}

bool UBUAnimHumanoidCS_AdvancedMonsterLocomotion::ShouldMoveTurnSwitchLockToFree() {
    return false;
}


