#include "BED_ProcessMachineNode_Final.h"
#include "ECalliopeNodeStyle.h"

UBED_ProcessMachineNode_Final::UBED_ProcessMachineNode_Final() {
    this->Category = TEXT("Machine Nodes");
    this->NodeStyle = ECalliopeNodeStyle::InOut;
    this->InputPins.AddDefaulted(1);
}


