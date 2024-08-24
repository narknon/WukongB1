#include "BED_BehaviorNode_LogicalOr.h"
#include "ECalliopeNodeStyle.h"

UBED_BehaviorNode_LogicalOr::UBED_BehaviorNode_LogicalOr() {
    this->Category = TEXT("Logic");
    this->NodeStyle = ECalliopeNodeStyle::Logic;
    this->InputPins.AddDefaulted(2);
    this->OutputPins.AddDefaulted(2);
}

bool UBED_BehaviorNode_LogicalOr::IsSupportViewType_Implementation(const ECalliopeViewType& InViewType) const {
    return false;
}

bool UBED_BehaviorNode_LogicalOr::CanUserAddInputInCS_Implementation() const {
    return false;
}


