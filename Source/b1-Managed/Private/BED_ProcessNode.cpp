#include "BED_ProcessNode.h"

UBED_ProcessNode::UBED_ProcessNode() {
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
}

bool UBED_ProcessNode::IsSupportViewType_Implementation(const ECalliopeViewType& InViewType) const {
    return false;
}


