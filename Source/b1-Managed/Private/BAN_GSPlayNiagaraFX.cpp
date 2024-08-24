#include "BAN_GSPlayNiagaraFX.h"

UBAN_GSPlayNiagaraFX::UBAN_GSPlayNiagaraFX() {
    this->EditorActive = false;
    this->Duration = 0.00f;
    this->DelayTimeAfterStop = 0.00f;
    this->DestroyTiming = DispLibDBCEffectDestroyTiming::OnEndDispStageEnd;
    this->Attached = true;
    this->attachLocationMode = EAttachLocation::KeepRelativeOffset;
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
    this->DBC_IdentityID = 0;
    this->hasAttachedSocket = false;
}

void UBAN_GSPlayNiagaraFX::GSNotifyCS_Implementation(FUStGSNotifyParam NotifyParam) const {
}

EGsEnAnimN UBAN_GSPlayNiagaraFX::GetAnimNType_Implementation() const {
    return EGsEnAnimN::None;
}

TArray<FSoftObjectPath> UBAN_GSPlayNiagaraFX::GetSoftReferences_Implementation() const {
    return TArray<FSoftObjectPath>();
}


