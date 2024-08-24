#include "BANS_GSSwitchPlayerCamID.h"

UBANS_GSSwitchPlayerCamID::UBANS_GSSwitchPlayerCamID() {
    this->CameraID = 0;
}

void UBANS_GSSwitchPlayerCamID::GSNotifyEndCS_Implementation(FUStGSNotifyParam NotifyParam) const {
}

void UBANS_GSSwitchPlayerCamID::GSNotifyBeginCS_Implementation(FUStGSNotifyParam NotifyParam, float TotalDuration) const {
}


