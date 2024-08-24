#include "BAN_GSPlayLevelSequence.h"

UBAN_GSPlayLevelSequence::UBAN_GSPlayLevelSequence() {
    this->SequenceID = 0;
    this->bUsePlayerCamera = false;
    this->StartTime = 0.00f;
    this->bDisableMovementInput = false;
    this->bDisableLookAtInput = false;
    this->bUseCrane = false;
    this->bUseRail = false;
    this->bHidePlayer = false;
    this->bHideHud = false;
    this->bDisableCameraCuts = false;
}

void UBAN_GSPlayLevelSequence::GSNotifyCS_Implementation(FUStGSNotifyParam NotifyParam) const {
}

bool UBAN_GSPlayLevelSequence::bIsNativeBranchingPointCS_Implementation() const {
    return false;
}


