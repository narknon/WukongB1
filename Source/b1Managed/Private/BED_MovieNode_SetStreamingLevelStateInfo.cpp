#include "BED_MovieNode_SetStreamingLevelStateInfo.h"

UBED_MovieNode_SetStreamingLevelStateInfo::UBED_MovieNode_SetStreamingLevelStateInfo() {
    this->Category = TEXT("Action");
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
}

FString UBED_MovieNode_SetStreamingLevelStateInfo::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


