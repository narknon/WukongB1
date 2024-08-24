#include "BED_MovieNode_PerformerExitPhasePerformance.h"

UBED_MovieNode_PerformerExitPhasePerformance::UBED_MovieNode_PerformerExitPhasePerformance() {
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
}

FString UBED_MovieNode_PerformerExitPhasePerformance::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


