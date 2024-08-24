#include "BED_MovieNode_PerformerStopWaiting.h"

UBED_MovieNode_PerformerStopWaiting::UBED_MovieNode_PerformerStopWaiting() {
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
}

FString UBED_MovieNode_PerformerStopWaiting::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


