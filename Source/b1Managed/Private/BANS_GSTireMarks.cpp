#include "BANS_GSTireMarks.h"

UBANS_GSTireMarks::UBANS_GSTireMarks() {
    this->DecalMat = NULL;
    this->DecalFadeOutTime = 0.00f;
    this->DecalDelayFadeOutTime = 0.00f;
}

void UBANS_GSTireMarks::GSNotifyEndCS_Implementation(FUStGSNotifyParam NotifyParam) const {
}

void UBANS_GSTireMarks::GSNotifyTickCS_Implementation(FUStGSNotifyParam NotifyParam, float FrameDeltaTime) const {
}

void UBANS_GSTireMarks::GSNotifyBeginCS_Implementation(FUStGSNotifyParam NotifyParam, float TotalDuration) const {
}


