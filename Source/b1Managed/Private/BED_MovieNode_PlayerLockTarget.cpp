#include "BED_MovieNode_PlayerLockTarget.h"

UBED_MovieNode_PlayerLockTarget::UBED_MovieNode_PlayerLockTarget() {
    this->Category = TEXT("Action");
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
    this->bUnlock = false;
}

FString UBED_MovieNode_PlayerLockTarget::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


