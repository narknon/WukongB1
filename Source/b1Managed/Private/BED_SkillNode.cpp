#include "BED_SkillNode.h"

UBED_SkillNode::UBED_SkillNode() {
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
}

bool UBED_SkillNode::IsSupportViewType_Implementation(const ECalliopeViewType& InViewType) const {
    return false;
}


