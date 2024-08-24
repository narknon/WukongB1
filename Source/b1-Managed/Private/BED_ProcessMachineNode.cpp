#include "BED_ProcessMachineNode.h"

UBED_ProcessMachineNode::UBED_ProcessMachineNode() {
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
}

void UBED_ProcessMachineNode::OnRefreshAssetInCS_Implementation() const {
}


