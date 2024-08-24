#include "BED_FSMNode_Condition_GI_Global_IsIgnoreWXLogin.h"

UBED_FSMNode_Condition_GI_Global_IsIgnoreWXLogin::UBED_FSMNode_Condition_GI_Global_IsIgnoreWXLogin() {
    this->Category = TEXT("GI_Global Condition");
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(2);
}

FString UBED_FSMNode_Condition_GI_Global_IsIgnoreWXLogin::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


