#include "BAN_GSPlayDummyAnim.h"

UBAN_GSPlayDummyAnim::UBAN_GSPlayDummyAnim() {
    this->AnimSeq = NULL;
    this->bLoop = false;
    this->DummySKMeshCompTag = TEXT("DummySK");
}

void UBAN_GSPlayDummyAnim::GSNotifyCS_Implementation(FUStGSNotifyParam NotifyParam) const {
}

bool UBAN_GSPlayDummyAnim::bIsNativeBranchingPointCS_Implementation() const {
    return false;
}


