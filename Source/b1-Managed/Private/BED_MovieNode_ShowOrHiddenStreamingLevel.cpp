#include "BED_MovieNode_ShowOrHiddenStreamingLevel.h"

UBED_MovieNode_ShowOrHiddenStreamingLevel::UBED_MovieNode_ShowOrHiddenStreamingLevel() {
    this->Category = TEXT("Action");
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
    this->bVisible = true;
}

FString UBED_MovieNode_ShowOrHiddenStreamingLevel::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


