#include "BED_FSMNode.h"

UBED_FSMNode::UBED_FSMNode() {
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
}

bool UBED_FSMNode::IsSupportViewType_Implementation(const ECalliopeViewType& InViewType) const {
    return false;
}


