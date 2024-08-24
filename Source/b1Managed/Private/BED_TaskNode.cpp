#include "BED_TaskNode.h"

UBED_TaskNode::UBED_TaskNode() {
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
}

bool UBED_TaskNode::IsSupportViewType_Implementation(const ECalliopeViewType& InViewType) const {
    return false;
}


