#include "BED_MovieNode_PerformerRemoveBuff.h"

UBED_MovieNode_PerformerRemoveBuff::UBED_MovieNode_PerformerRemoveBuff() {
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
    this->BuffID = 0;
    this->BuffLayer = 1;
    this->bTriggerRemoveEffect = true;
    this->bPlayerAsPerformer = false;
}

FString UBED_MovieNode_PerformerRemoveBuff::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


