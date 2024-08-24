#include "BED_ProcessMachineNode_Reroute.h"

UBED_ProcessMachineNode_Reroute::UBED_ProcessMachineNode_Reroute() {
    this->Category = TEXT("Route");
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
}


