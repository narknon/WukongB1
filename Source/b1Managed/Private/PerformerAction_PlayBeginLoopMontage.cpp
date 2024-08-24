#include "PerformerAction_PlayBeginLoopMontage.h"

UPerformerAction_PlayBeginLoopMontage::UPerformerAction_PlayBeginLoopMontage() {
    this->BeginMontage = NULL;
    this->LoopMontage = NULL;
}

void UPerformerAction_PlayBeginLoopMontage::OnMontageBlendingOut(UAnimMontage* InMontage, bool bInterrupted) {
}


