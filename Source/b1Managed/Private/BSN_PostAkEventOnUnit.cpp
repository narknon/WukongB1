#include "BSN_PostAkEventOnUnit.h"

UBSN_PostAkEventOnUnit::UBSN_PostAkEventOnUnit() {
    this->bTakePlayerAsUnit = false;
    this->CanHandleStopRequest = false;
    this->AkEvent = NULL;
    this->AkStopEvent = NULL;
    this->Follow = false;
}

void UBSN_PostAkEventOnUnit::OnNotify_Implementation(UCalliopeLevelSequencePlayer* InPlayer, int32 InStatus, bool bInBackwards) {
}

FString UBSN_PostAkEventOnUnit::GetDisplayName_Implementation() {
    return TEXT("");
}

void UBSN_PostAkEventOnUnit::OnPreviewNotify_Implementation(UObject* InPlaybackContext, int32 InStatus, bool bInBackwards) {
}

float UBSN_PostAkEventOnUnit::GetDurationTime_Implementation() {
    return 0.0f;
}


