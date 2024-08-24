#include "DispLib_EditorTestFXToolComp.h"

UDispLib_EditorTestFXToolComp::UDispLib_EditorTestFXToolComp(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Enable = false;
    this->Template = NULL;
    this->SimDBCMergeNiagara = false;
    this->SimulaHitTime = 0.00f;
    this->FlySpeed = 0.00f;
    this->AutoResetTimeAfterLoopEnd = 0.00f;
    this->MultiSpawnSimulaLoopDuration = 0.00f;
    this->MultiSpawn_EveryChildEventStdPlayingDuration = 0.00f;
    this->MultiSpawn_EveryChildEventEndDispStageDuration = 0.00f;
    this->MultiSpawn_ChildEventSpawnOnGridPlane = false;
    this->MultiSpawn_SimFlyBullet = false;
    this->MultiSpawn_RandomFlyVelocity = false;
    this->MgrSystemNGActor = NULL;
    this->NC = NULL;
    this->HitMarkObj = NULL;
}

void UDispLib_EditorTestFXToolComp::ForceCleanAllNiagaraComp() {
}

void UDispLib_EditorTestFXToolComp::EndPlayInCS_Implementation(EEndPlayReason::Type EndPlayReason) {
}

void UDispLib_EditorTestFXToolComp::BeginPlayInCS_Implementation() {
}

void UDispLib_EditorTestFXToolComp::TickComponentInCS_Implementation(float DeltaTime) {
}


