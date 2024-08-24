#include "BED_ProcessMachineNode_Counter.h"

UBED_ProcessMachineNode_Counter::UBED_ProcessMachineNode_Counter() {
    this->bSupportsContextPins = false;
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
    this->Goal = 0;
}


