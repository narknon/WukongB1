#include "BED_MovieNode_PerformerAddBuff.h"

UBED_MovieNode_PerformerAddBuff::UBED_MovieNode_PerformerAddBuff() {
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
    this->BuffID = 0;
    this->BuffLayer = 1;
    this->BuffDuration = 0;
    this->bPlayerAsPerformer = false;
}

FString UBED_MovieNode_PerformerAddBuff::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


