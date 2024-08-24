#include "BED_ProcessStateNode.h"

UBED_ProcessStateNode::UBED_ProcessStateNode() {
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
}

bool UBED_ProcessStateNode::IsBranchGraphNode_Implementation() const {
    return false;
}


