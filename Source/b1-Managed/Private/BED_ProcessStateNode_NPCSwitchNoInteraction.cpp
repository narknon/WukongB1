#include "BED_ProcessStateNode_NPCSwitchNoInteraction.h"

UBED_ProcessStateNode_NPCSwitchNoInteraction::UBED_ProcessStateNode_NPCSwitchNoInteraction() {
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
    this->bIsRecover = false;
}


