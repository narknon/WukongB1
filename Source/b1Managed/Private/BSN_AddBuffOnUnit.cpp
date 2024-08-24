#include "BSN_AddBuffOnUnit.h"

UBSN_AddBuffOnUnit::UBSN_AddBuffOnUnit() {
    this->bTakePlayerAsUnit = false;
    this->BuffID = 0;
    this->BuffLayer = 1;
    this->BuffDuration = 0;
}

void UBSN_AddBuffOnUnit::OnNotify_Implementation(UCalliopeLevelSequencePlayer* InPlayer, int32 InStatus, bool bInBackwards) {
}

void UBSN_AddBuffOnUnit::OnPreviewNotify_Implementation(UObject* InPlaybackContext, int32 InStatus, bool bInBackwards) {
}


