#include "BANS_GSB1TimedPlayNiagaraFX.h"

UBANS_GSB1TimedPlayNiagaraFX::UBANS_GSB1TimedPlayNiagaraFX() {
    this->CanBePlacedInASCS = true;
    this->CanUseQueuedType = true;
    this->ignoreRootBoneScale = true;
    this->destroyAtEnd = false;
    this->TranslucentSortPriority = 0;
}

void UBANS_GSB1TimedPlayNiagaraFX::GSNotifyEndCS_Implementation(FUStGSNotifyParam NotifyParam) const {
}

void UBANS_GSB1TimedPlayNiagaraFX::GSNotifyBeginCS_Implementation(FUStGSNotifyParam NotifyParam, float TotalDuration) const {
}

TArray<FSoftObjectPath> UBANS_GSB1TimedPlayNiagaraFX::GetSoftReferences_Implementation() const {
    return TArray<FSoftObjectPath>();
}


