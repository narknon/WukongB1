#include "BED_MovieNode_PerformerCatchTarget.h"

UBED_MovieNode_PerformerCatchTarget::UBED_MovieNode_PerformerCatchTarget() {
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
}

FString UBED_MovieNode_PerformerCatchTarget::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


