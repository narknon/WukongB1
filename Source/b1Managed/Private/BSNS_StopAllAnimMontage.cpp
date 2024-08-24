#include "BSNS_StopAllAnimMontage.h"

UBSNS_StopAllAnimMontage::UBSNS_StopAllAnimMontage() {
    this->bTakePlayerAsUnit = false;
}

void UBSNS_StopAllAnimMontage::OnNotifyBegin_Implementation(UCalliopeLevelSequencePlayer* Player, int32 InStatus, bool bInBackwards) {
}


