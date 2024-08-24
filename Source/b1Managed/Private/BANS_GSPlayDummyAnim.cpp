#include "BANS_GSPlayDummyAnim.h"

UBANS_GSPlayDummyAnim::UBANS_GSPlayDummyAnim() {
    this->AnimSeq = NULL;
    this->bLoop = false;
    this->DummySKMeshCompTag = TEXT("DummySK");
}

void UBANS_GSPlayDummyAnim::GSNotifyEndCS_Implementation(FUStGSNotifyParam NotifyParam) const {
}

void UBANS_GSPlayDummyAnim::GSNotifyBeginCS_Implementation(FUStGSNotifyParam NotifyParam, float TotalDuration) const {
}


