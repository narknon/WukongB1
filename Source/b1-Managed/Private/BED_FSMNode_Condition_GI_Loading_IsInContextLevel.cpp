#include "BED_FSMNode_Condition_GI_Loading_IsInContextLevel.h"

UBED_FSMNode_Condition_GI_Loading_IsInContextLevel::UBED_FSMNode_Condition_GI_Loading_IsInContextLevel() {
    this->Category = TEXT("GI_Loading Condition");
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(2);
}

FString UBED_FSMNode_Condition_GI_Loading_IsInContextLevel::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


