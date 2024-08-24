#include "BED_FSMNode_Condition_GI_Loading_IsInMap.h"

UBED_FSMNode_Condition_GI_Loading_IsInMap::UBED_FSMNode_Condition_GI_Loading_IsInMap() {
    this->Category = TEXT("GI_Loading Condition");
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(2);
}

FString UBED_FSMNode_Condition_GI_Loading_IsInMap::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


