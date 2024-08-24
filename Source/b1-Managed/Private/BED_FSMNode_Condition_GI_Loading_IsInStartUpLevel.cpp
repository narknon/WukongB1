#include "BED_FSMNode_Condition_GI_Loading_IsInStartUpLevel.h"

UBED_FSMNode_Condition_GI_Loading_IsInStartUpLevel::UBED_FSMNode_Condition_GI_Loading_IsInStartUpLevel() {
    this->Category = TEXT("GI_Loading Condition");
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(2);
}

FString UBED_FSMNode_Condition_GI_Loading_IsInStartUpLevel::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


