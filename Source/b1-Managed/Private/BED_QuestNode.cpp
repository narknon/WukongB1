#include "BED_QuestNode.h"

UBED_QuestNode::UBED_QuestNode() {
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
}

bool UBED_QuestNode::IsSupportViewType_Implementation(const ECalliopeViewType& InViewType) const {
    return false;
}


