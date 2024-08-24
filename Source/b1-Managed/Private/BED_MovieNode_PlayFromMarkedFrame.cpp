#include "BED_MovieNode_PlayFromMarkedFrame.h"

UBED_MovieNode_PlayFromMarkedFrame::UBED_MovieNode_PlayFromMarkedFrame() {
    this->Category = TEXT("Action");
    this->InputPins.AddDefaulted(1);
}

FString UBED_MovieNode_PlayFromMarkedFrame::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


