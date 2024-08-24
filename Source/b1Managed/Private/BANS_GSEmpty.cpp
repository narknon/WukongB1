#include "BANS_GSEmpty.h"

UBANS_GSEmpty::UBANS_GSEmpty() {
}

void UBANS_GSEmpty::GSNotifyEndCS_Implementation(FUStGSNotifyParam NotifyParam) const {
}

void UBANS_GSEmpty::GSNotifyTickCS_Implementation(FUStGSNotifyParam NotifyParam, float FrameDeltaTime) const {
}

void UBANS_GSEmpty::GSNotifyBeginCS_Implementation(FUStGSNotifyParam NotifyParam, float TotalDuration) const {
}

bool UBANS_GSEmpty::GSAllowCrossSection_Implementation() const {
    return false;
}


