#include "BED_ProcessMachineNode_Join.h"
#include "ECalliopeNodeStyle.h"

UBED_ProcessMachineNode_Join::UBED_ProcessMachineNode_Join() {
    this->Category = TEXT("Machine Operators");
    this->NodeStyle = ECalliopeNodeStyle::Logic;
    this->InputPins.AddDefaulted(2);
    this->OutputPins.AddDefaulted(1);
}

bool UBED_ProcessMachineNode_Join::IsSupportViewType_Implementation(const ECalliopeViewType& InViewType) const {
    return false;
}

bool UBED_ProcessMachineNode_Join::CanUserAddInputInCS_Implementation() const {
    return false;
}


