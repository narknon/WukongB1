#include "BED_BehaviorNode_OnTrigerFSMEvent.h"
#include "ECalliopeNodeStyle.h"

UBED_BehaviorNode_OnTrigerFSMEvent::UBED_BehaviorNode_OnTrigerFSMEvent() {
    this->Category = TEXT("FSMState");
    this->NodeStyle = ECalliopeNodeStyle::InOut;
    this->OutputPins.AddDefaulted(1);
}

bool UBED_BehaviorNode_OnTrigerFSMEvent::IsSupportViewType_Implementation(const ECalliopeViewType& InViewType) const {
    return false;
}


