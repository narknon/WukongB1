#include "BED_MovieNode_PerformerSetTransform.h"

UBED_MovieNode_PerformerSetTransform::UBED_MovieNode_PerformerSetTransform() {
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
    this->bPlayerAsPerformer = false;
}

FString UBED_MovieNode_PerformerSetTransform::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


