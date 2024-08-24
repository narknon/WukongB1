#include "AutoMovementMonitor.h"

AAutoMovementMonitor::AAutoMovementMonitor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AutoMovePattern = NULL;
    this->bLogProcessingState = false;
    this->bIsReadyToProcess = false;
    this->bPitchingPositively = true;
    this->TargetPositionIndex = 0;
    this->TargetYawIndex = 0;
    this->TargetPitchIndex = 0;
    this->ViewingPhaseIndex = 0;
    this->LastPointEndTimestamp = 0.00f;
}

void AAutoMovementMonitor::TransportViewingPosition_Implementation(FVector InLocation, FRotator InRotator, bool bProxyCall) {
}

void AAutoMovementMonitor::SwitchToVirtualPawn_Implementation(UClass* VirtualPlayerBaseClass, FVector SpawningOffset) {
}

void AAutoMovementMonitor::SwitchRotateDirection() {
}

void AAutoMovementMonitor::StopAutoMovement() {
}

void AAutoMovementMonitor::SetSparseVersionEnabled(bool bEnabled) {
}

void AAutoMovementMonitor::ResumeAutoMovement_Implementation() {
}

void AAutoMovementMonitor::ResetYawRotation() {
}

void AAutoMovementMonitor::ResetTransportAttemptedCount() {
}

void AAutoMovementMonitor::ResetPitchRotation() {
}

void AAutoMovementMonitor::ResetAutoMovement() {
}

void AAutoMovementMonitor::RegisterAutoMovementConsoleCommands() {
}

void AAutoMovementMonitor::ProcessAutoMovement(FVector InLocation, FRotator InRotator) {
}

void AAutoMovementMonitor::PreAutoMovement_Implementation() {
}


void AAutoMovementMonitor::PauseAutoMovement_Implementation() {
}

void AAutoMovementMonitor::LoadPathPoints() {
}

void AAutoMovementMonitor::IncreaseViewingRotation_Implementation(ERotateType RotateType, bool bProxyCall) {
}

bool AAutoMovementMonitor::HasCompletedYawingObservation() const {
    return false;
}

bool AAutoMovementMonitor::HasCompletedPitchingObservation() const {
    return false;
}

FRotator AAutoMovementMonitor::GetRotationIncrement(FVector InRotatorMask, FAutoMovementViewingPattern ViewingPattern) {
    return FRotator{};
}

FString AAutoMovementMonitor::GetPointExecutionDurationInfo(int64 InStartTimestamp) {
    return TEXT("");
}

void AAutoMovementMonitor::ExitAppOnAutoMoveFinished() {
}

void AAutoMovementMonitor::EnableAutoMovement() {
}


void AAutoMovementMonitor::CreatePointInstances_Implementation(const TArray<FVector>& InPoints) {
}

void AAutoMovementMonitor::CheckHitRotation_Implementation(FRotator InRotator) {
}

bool AAutoMovementMonitor::CheckHitLocation(FVector InLocation) const {
    return false;
}

bool AAutoMovementMonitor::CheckAutoMovementCompleted() const {
    return false;
}

void AAutoMovementMonitor::CaptureViewingInfo_Implementation() {
}


