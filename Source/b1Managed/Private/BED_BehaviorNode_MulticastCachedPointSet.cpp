#include "BED_BehaviorNode_MulticastCachedPointSet.h"

UBED_BehaviorNode_MulticastCachedPointSet::UBED_BehaviorNode_MulticastCachedPointSet() {
    this->InputPins.AddDefaulted(1);
    this->RequestID = 0;
}

FString UBED_BehaviorNode_MulticastCachedPointSet::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


