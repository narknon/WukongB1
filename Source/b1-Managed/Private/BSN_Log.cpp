#include "BSN_Log.h"

UBSN_Log::UBSN_Log() {
    this->bPrintToScreen = false;
    this->Duration = 0.00f;
}

void UBSN_Log::OnNotify_Implementation(UCalliopeLevelSequencePlayer* InPlayer, int32 InStatus, bool bInBackwards) {
}


