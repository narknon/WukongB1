#include "BANS_UnhideAndPlayAnim.h"

UBANS_UnhideAndPlayAnim::UBANS_UnhideAndPlayAnim() {
    this->AnimationToPlay = NULL;
}

void UBANS_UnhideAndPlayAnim::GSNotifyEndCS_Implementation(FUStGSNotifyParam NotifyParam) const {
}

void UBANS_UnhideAndPlayAnim::GSNotifyBeginCS_Implementation(FUStGSNotifyParam NotifyParam, float TotalDuration) const {
}


