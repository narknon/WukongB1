#include "BED_ProcessMachineNode_Initial.h"
#include "ECalliopeNodeStyle.h"

UBED_ProcessMachineNode_Initial::UBED_ProcessMachineNode_Initial() {
    this->Category = TEXT("Machine Nodes");
    this->NodeStyle = ECalliopeNodeStyle::InOut;
    this->OutputPins.AddDefaulted(1);
}


