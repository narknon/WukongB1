#include "BED_MovieNode_ManipulateStreamingSource.h"
#include "ECalliopeNodeStyle.h"

UBED_MovieNode_ManipulateStreamingSource::UBED_MovieNode_ManipulateStreamingSource() {
    this->Category = TEXT("Action");
    this->NodeStyle = ECalliopeNodeStyle::InOut;
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
    this->bEnable = true;
}

FString UBED_MovieNode_ManipulateStreamingSource::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


