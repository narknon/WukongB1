#include "BAN_GSPlaySequence.h"

UBAN_GSPlaySequence::UBAN_GSPlaySequence() {
}

void UBAN_GSPlaySequence::GSNotifyCS_Implementation(FUStGSNotifyParam NotifyParam) const {
}

TArray<FSoftObjectPath> UBAN_GSPlaySequence::GetSoftReferences_Implementation() const {
    return TArray<FSoftObjectPath>();
}

bool UBAN_GSPlaySequence::bIsNativeBranchingPointCS_Implementation() const {
    return false;
}


