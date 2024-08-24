#include "BED_FSMNode_Condition_GI_Loading_IsEnableLoadingUserInput.h"

UBED_FSMNode_Condition_GI_Loading_IsEnableLoadingUserInput::UBED_FSMNode_Condition_GI_Loading_IsEnableLoadingUserInput() {
    this->Category = TEXT("GI_Loading Condition");
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(2);
}

FString UBED_FSMNode_Condition_GI_Loading_IsEnableLoadingUserInput::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


