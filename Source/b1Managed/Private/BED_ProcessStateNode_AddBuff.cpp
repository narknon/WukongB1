#include "BED_ProcessStateNode_AddBuff.h"

UBED_ProcessStateNode_AddBuff::UBED_ProcessStateNode_AddBuff() {
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
    this->BuffID = 0;
    this->BuffLayer = 1;
    this->BuffDuration = 0;
}


