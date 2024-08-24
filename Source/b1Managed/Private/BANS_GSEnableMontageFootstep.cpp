#include "BANS_GSEnableMontageFootstep.h"

UBANS_GSEnableMontageFootstep::UBANS_GSEnableMontageFootstep() {
    this->bEnableFootDecal = true;
    this->bEnableFootstepAudio = true;
    this->bEnableFootstepFX = true;
}

void UBANS_GSEnableMontageFootstep::GSNotifyEndCS_Implementation(FUStGSNotifyParam NotifyParam) const {
}

void UBANS_GSEnableMontageFootstep::GSNotifyBeginCS_Implementation(FUStGSNotifyParam NotifyParam, float TotalDuration) const {
}


