#include "DispLib_DBCNiagaraComponent.h"

UDispLib_DBCNiagaraComponent::UDispLib_DBCNiagaraComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Delay = 0.00f;
    this->EndMode = DispLibDBCEndMode::ProcedureNotity;
    this->Duration = 0.00f;
    this->DelayTimeAfterStop = 0.00f;
    this->DestroyTiming = DispLibDBCEffectDestroyTiming::OnEndDispStageEnd;
    this->Template = NULL;
    this->Attached = true;
    this->offsetInLocaSpace = false;
    this->SnapGround = false;
    this->SnapGroundRotationMode = DispLibDBCSnapGroundRotationMode::HitPointNormalProjected;
    this->ignoreRootBoneScale = false;
    this->SetSelfMeshParam = false;
    this->DetachOnEndDispStageBegin = false;
    this->EnableShadow = false;
    this->EnableVolumetricTranslucentShadow = false;
    this->TranslucentSortPriority = 0;
    this->PausePriority = 0;
    this->PauseMode = DispLibDBCPauseMode::Pause;
    this->EndStagePriority = 0;
    this->ForceChangeVisibleStateDEFPriority = 0;
    this->ForceVisibleStateDefaultMode = DispLibDBCNiagaraForceVisibleStateMode::ImmdSetCompVisibleState;
    this->GamePlayDispReqID = 0;
    this->hasAttachedSocket = false;
    this->EditorPreview_NGComp = NULL;
    this->DBCRequestHasSend = false;
    this->InitOver = false;
}

void UDispLib_DBCNiagaraComponent::EndPlayInCS_Implementation(EEndPlayReason::Type EndPlayReason) {
}

void UDispLib_DBCNiagaraComponent::BeginPlayInCS_Implementation() {
}

void UDispLib_DBCNiagaraComponent::TickComponentInCS_Implementation(float DeltaTime) {
}

void UDispLib_DBCNiagaraComponent::OnPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}


