#include "BED_ProcessStateNode_RemoveBuff.h"

UBED_ProcessStateNode_RemoveBuff::UBED_ProcessStateNode_RemoveBuff() {
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
    this->BuffID = 0;
    this->BuffLayer = 1;
    this->bTriggerRemoveEffect = true;
}


