#include "BED_MovieNode_BeforePlay.h"

UBED_MovieNode_BeforePlay::UBED_MovieNode_BeforePlay() {
    this->OutputPins.AddDefaulted(1);
    this->DelayTime = 0.00f;
    this->TimeDilationCurve = NULL;
    this->bUseAsyncTransBack = false;
}

FString UBED_MovieNode_BeforePlay::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


