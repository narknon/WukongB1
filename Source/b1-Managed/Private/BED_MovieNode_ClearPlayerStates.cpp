#include "BED_MovieNode_ClearPlayerStates.h"

UBED_MovieNode_ClearPlayerStates::UBED_MovieNode_ClearPlayerStates() {
    this->Category = TEXT("Action");
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
    this->bStopJump = false;
}


