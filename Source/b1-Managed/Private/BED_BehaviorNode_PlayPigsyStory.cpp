#include "BED_BehaviorNode_PlayPigsyStory.h"

UBED_BehaviorNode_PlayPigsyStory::UBED_BehaviorNode_PlayPigsyStory() {
    this->InputPins.AddDefaulted(1);
}

bool UBED_BehaviorNode_PlayPigsyStory::IsSupportViewType_Implementation(const ECalliopeViewType& InViewType) const {
    return false;
}


