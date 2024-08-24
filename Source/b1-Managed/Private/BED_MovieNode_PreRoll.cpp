#include "BED_MovieNode_PreRoll.h"

UBED_MovieNode_PreRoll::UBED_MovieNode_PreRoll() {
    this->Category = TEXT("Phase");
    this->OutputPins.AddDefaulted(1);
    this->bUseCinematicCamera = false;
    this->InCameraBlendTime = 2.00f;
    this->InCameraBlendFunction = VTBlend_EaseInOut;
    this->InCameraBlendFactor = 1.50f;
    this->bStopSequenceWhenFinish = true;
}

FString UBED_MovieNode_PreRoll::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


