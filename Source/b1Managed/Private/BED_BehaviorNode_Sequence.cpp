#include "BED_BehaviorNode_Sequence.h"
#include "ECalliopeNodeStyle.h"

UBED_BehaviorNode_Sequence::UBED_BehaviorNode_Sequence() {
    this->Category = TEXT("Logic");
    this->NodeStyle = ECalliopeNodeStyle::Logic;
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(2);
}

bool UBED_BehaviorNode_Sequence::IsSupportViewType_Implementation(const ECalliopeViewType& InViewType) const {
    return false;
}

bool UBED_BehaviorNode_Sequence::CanUserAddOutputInCS_Implementation() const {
    return false;
}


