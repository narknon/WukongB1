#include "BED_FSMNode_Condition_GI_Loading_IsNeedPreEnterLevel.h"

UBED_FSMNode_Condition_GI_Loading_IsNeedPreEnterLevel::UBED_FSMNode_Condition_GI_Loading_IsNeedPreEnterLevel() {
    this->Category = TEXT("GI_Loading Condition");
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(2);
}

FString UBED_FSMNode_Condition_GI_Loading_IsNeedPreEnterLevel::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


