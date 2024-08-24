#include "BED_MovieNode_SetStreamingManagerViewSource.h"
#include "ECalliopeNodeStyle.h"

UBED_MovieNode_SetStreamingManagerViewSource::UBED_MovieNode_SetStreamingManagerViewSource() {
    this->Category = TEXT("Action");
    this->NodeStyle = ECalliopeNodeStyle::InOut;
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
    this->bAlive = true;
}

FString UBED_MovieNode_SetStreamingManagerViewSource::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


