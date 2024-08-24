#include "BED_BehaviorNode_LogicalAnd.h"
#include "ECalliopeNodeStyle.h"

UBED_BehaviorNode_LogicalAnd::UBED_BehaviorNode_LogicalAnd() {
    this->Category = TEXT("Logic");
    this->NodeStyle = ECalliopeNodeStyle::Logic;
    this->InputPins.AddDefaulted(2);
    this->OutputPins.AddDefaulted(2);
}

bool UBED_BehaviorNode_LogicalAnd::IsSupportViewType_Implementation(const ECalliopeViewType& InViewType) const {
    return false;
}

bool UBED_BehaviorNode_LogicalAnd::CanUserAddInputInCS_Implementation() const {
    return false;
}


