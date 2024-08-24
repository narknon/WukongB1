#include "BSN_SetUnitTransform.h"

UBSN_SetUnitTransform::UBSN_SetUnitTransform() {
    this->bTakePlayerAsUnit = false;
}

void UBSN_SetUnitTransform::OnNotify_Implementation(UCalliopeLevelSequencePlayer* InPlayer, int32 InStatus, bool bInBackwards) {
}

void UBSN_SetUnitTransform::OnPreviewNotify_Implementation(UObject* InPlaybackContext, int32 InStatus, bool bInBackwards) {
}


