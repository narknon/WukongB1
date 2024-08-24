#include "BANS_GSTimedPlayNiagaraFX.h"

UBANS_GSTimedPlayNiagaraFX::UBANS_GSTimedPlayNiagaraFX() {
    this->CanBePlacedInASCS = true;
    this->CanUseQueuedType = true;
    this->EditorActive = false;
    this->DelayTimeAfterStop = 0.00f;
    this->DestroyTiming = DispLibDBCEffectDestroyTiming::OnEndDispStageEnd;
    this->Attached = false;
    this->offsetInLocaSpace = false;
    this->SnapGround = false;
    this->SnapGroundRotationMode = DispLibDBCSnapGroundRotationMode::HitPointNormalProjected;
    this->ignoreRootBoneScale = true;
    this->SetSelfMeshParam = false;
    this->DetachOnEndDispStageBegin = false;
    this->EnableShadow = false;
    this->TranslucentSortPriority = 0;
    this->PausePriority = 0;
    this->PauseMode = DispLibDBCPauseMode::Pause;
    this->EndStagePriority = 0;
    this->ForceChangeVisibleStateDEFPriority = 0;
    this->ForceVisibleStateDefaultMode = DispLibDBCNiagaraForceVisibleStateMode::ImmdSetCompVisibleState;
    this->hasAttachedSocket = false;
}

void UBANS_GSTimedPlayNiagaraFX::GSNotifyEndCS_Implementation(FUStGSNotifyParam NotifyParam) const {
}

void UBANS_GSTimedPlayNiagaraFX::GSNotifyBeginCS_Implementation(FUStGSNotifyParam NotifyParam, float TotalDuration) const {
}

TArray<FSoftObjectPath> UBANS_GSTimedPlayNiagaraFX::GetSoftReferences_Implementation() const {
    return TArray<FSoftObjectPath>();
}


