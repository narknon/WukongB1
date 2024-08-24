#include "BED_MovieNode_PerformerSyncTransformToRefObj.h"

UBED_MovieNode_PerformerSyncTransformToRefObj::UBED_MovieNode_PerformerSyncTransformToRefObj() {
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
    this->bPlayerAsPerformer = false;
}

FString UBED_MovieNode_PerformerSyncTransformToRefObj::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


