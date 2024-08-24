#include "BSN_RemoveBuffOnUnit.h"

UBSN_RemoveBuffOnUnit::UBSN_RemoveBuffOnUnit() {
    this->bTakePlayerAsUnit = false;
    this->BuffID = 0;
    this->BuffLayer = 0;
    this->bTriggerRemoveEffect = true;
}

void UBSN_RemoveBuffOnUnit::OnNotify_Implementation(UCalliopeLevelSequencePlayer* InPlayer, int32 InStatus, bool bInBackwards) {
}

void UBSN_RemoveBuffOnUnit::OnPreviewNotify_Implementation(UObject* InPlaybackContext, int32 InStatus, bool bInBackwards) {
}


