#include "BED_BehaviorNode.h"

UBED_BehaviorNode::UBED_BehaviorNode() {
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
}

bool UBED_BehaviorNode::IsSupportViewType_Implementation(const ECalliopeViewType& InViewType) const {
    return false;
}


