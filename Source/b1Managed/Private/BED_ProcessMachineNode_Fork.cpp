#include "BED_ProcessMachineNode_Fork.h"
#include "ECalliopeNodeStyle.h"

UBED_ProcessMachineNode_Fork::UBED_ProcessMachineNode_Fork() {
    this->Category = TEXT("Machine Operators");
    this->NodeStyle = ECalliopeNodeStyle::Logic;
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(2);
}

bool UBED_ProcessMachineNode_Fork::IsSupportViewType_Implementation(const ECalliopeViewType& InViewType) const {
    return false;
}

bool UBED_ProcessMachineNode_Fork::CanUserAddOutputInCS_Implementation() const {
    return false;
}


