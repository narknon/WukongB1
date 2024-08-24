#include "BED_BehaviorNode_GenAndCachePointSet.h"

UBED_BehaviorNode_GenAndCachePointSet::UBED_BehaviorNode_GenAndCachePointSet() {
    this->InputPins.AddDefaulted(1);
    this->RegisterID = 0;
    this->GenType = PointsGenType::ByEQS_Async;
}

FString UBED_BehaviorNode_GenAndCachePointSet::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


