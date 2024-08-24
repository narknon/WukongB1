#include "BED_ProcessMachineNode_Terminate.h"
#include "ECalliopeNodeStyle.h"

UBED_ProcessMachineNode_Terminate::UBED_ProcessMachineNode_Terminate() {
    this->Category = TEXT("Machine Nodes");
    this->NodeStyle = ECalliopeNodeStyle::InOut;
    this->InputPins.AddDefaulted(1);
}

bool UBED_ProcessMachineNode_Terminate::IsSupportViewType_Implementation(const ECalliopeViewType& InViewType) const {
    return false;
}


