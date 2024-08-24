#include "BED_BehaviorNode_ListenerTrigger.h"
#include "ECalliopeNodeStyle.h"

UBED_BehaviorNode_ListenerTrigger::UBED_BehaviorNode_ListenerTrigger() {
    this->Category = TEXT("ListenerTrigger");
    this->NodeStyle = ECalliopeNodeStyle::InOut;
    this->OutputPins.AddDefaulted(1);
}


