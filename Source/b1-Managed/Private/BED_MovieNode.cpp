#include "BED_MovieNode.h"

UBED_MovieNode::UBED_MovieNode() {
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
}

bool UBED_MovieNode::IsSupportViewType_Implementation(const ECalliopeViewType& InViewType) const {
    return false;
}


