#include "BSNS_EnableUnitIK.h"

UBSNS_EnableUnitIK::UBSNS_EnableUnitIK() {
    this->bTakePlayerAsUnit = false;
    this->bEnableIK = false;
    this->bEnableForefootIK = false;
    this->bEnableSpineIK = false;
}

void UBSNS_EnableUnitIK::OnNotifyEnd_Implementation(UCalliopeLevelSequencePlayer* InPlayer, int32 InStatus, bool bInBackwards) {
}

void UBSNS_EnableUnitIK::OnNotifyBegin_Implementation(UCalliopeLevelSequencePlayer* InPlayer, int32 InStatus, bool bInBackwards) {
}

void UBSNS_EnableUnitIK::OnPreviewNotifyEnd_Implementation(UObject* InPlaybackContext, int32 InStatus, bool bInBackwards) {
}

void UBSNS_EnableUnitIK::OnPreviewNotifyBegin_Implementation(UObject* InPlaybackContext, int32 InStatus, bool bInBackwards) {
}


