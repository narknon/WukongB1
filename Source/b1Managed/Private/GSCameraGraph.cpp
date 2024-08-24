#include "GSCameraGraph.h"

UGSCameraGraph::UGSCameraGraph() {
}

bool UGSCameraGraph::IsG4Mode() {
    return false;
}

bool UGSCameraGraph::IsLocked() {
    return false;
}

bool UGSCameraGraph::HasTarget() {
    return false;
}

bool UGSCameraGraph::TargetResIDEqual(int32 TargetResID) {
    return false;
}

bool UGSCameraGraph::HasNoCameraInput(float DurationTime) {
    return false;
}

bool UGSCameraGraph::IsUseGuiBeiCamera() {
    return false;
}

void UGSCameraGraph::OnCameraGraphTick_Implementation() {
}

void UGSCameraGraph::CameraGraphNode_G4(bool bEnable) {
}

bool UGSCameraGraph::TargetExtendIDEqual(int32 ExtendID) {
    return false;
}

void UGSCameraGraph::CameraGraphNode_Dead(bool bEnable, float ArmLength, float ArmLengthSpeed, float CameraPitch, float CameraPitchSpeed) {
}

void UGSCameraGraph::CameraGraphNode_Lock(bool bEnable) {
}

void UGSCameraGraph::CameraGraphNode_Giant(bool bEnable) {
}

void UGSCameraGraph::CameraGraphNode_Curve(bool bEnable) {
}

void UGSCameraGraph::CameraGraphNode_Player(bool bEnable) {
}

void UGSCameraGraph::CameraGraphNode_AutoTrail(bool bEnable, float InCameraRotationRate, float InCameraRotationAccelerate, float InCameraRotationVelocityThreshold, float InFallingAdjustAngleLimit, float InFallingAdjustSpeedPercent) {
}

void UGSCameraGraph::CameraGraphNode_LockSkill(bool bEnable) {
}

void UGSCameraGraph::CameraGraphNode_FixedParam(bool bEnable) {
}

void UGSCameraGraph::CameraGraphNode_SplineMove(bool bEnable, float CameraPitchAdditive, float CameraYawAdditive) {
}

void UGSCameraGraph::CameraGraphNode_GiantSkill(bool bEnable) {
}

void UGSCameraGraph::CameraGraphNode_AxisSmooth(bool bEnable, bool IsXAxisFixed, bool IsYAxisFixed, bool IsZAxisFixed, float SmoothSpeed, float CameraLagSpeed) {
}

void UGSCameraGraph::CameraGraphNode_PlayerSkill(bool bEnable) {
}

void UGSCameraGraph::CameraGraphNode_GuiBeiCamera(bool bEnable) {
}

void UGSCameraGraph::CameraGraphNode_ShootSuction(bool bEnable) {
}

void UGSCameraGraph::CameraGraphNode_TraceVelocity(bool bEnable) {
}

void UGSCameraGraph::CameraGraphNode_InverseCamera(bool bEnable) {
}

void UGSCameraGraph::CameraGraphNode_CloudMoveLimit(bool bEnable) {
}

void UGSCameraGraph::CameraGraphNode_LerpPostProcess(bool bEnable) {
}

void UGSCameraGraph::CameraGraphNode_AutoMoveTrailCamera(bool bEnable) {
}


