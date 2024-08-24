#include "BED_FSMNode_Condition_GI_Loading_IsNeedPostLeaveLevel.h"

UBED_FSMNode_Condition_GI_Loading_IsNeedPostLeaveLevel::UBED_FSMNode_Condition_GI_Loading_IsNeedPostLeaveLevel() {
    this->Category = TEXT("GI_Loading Condition");
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(2);
}

FString UBED_FSMNode_Condition_GI_Loading_IsNeedPostLeaveLevel::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


