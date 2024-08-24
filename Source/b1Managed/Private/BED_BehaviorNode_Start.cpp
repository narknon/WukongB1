#include "BED_BehaviorNode_Start.h"
#include "ECalliopeNodeStyle.h"

UBED_BehaviorNode_Start::UBED_BehaviorNode_Start() {
    this->NodeStyle = ECalliopeNodeStyle::InOut;
    this->OutputPins.AddDefaulted(1);
}

bool UBED_BehaviorNode_Start::IsSupportViewType_Implementation(const ECalliopeViewType& InViewType) const {
    return false;
}


