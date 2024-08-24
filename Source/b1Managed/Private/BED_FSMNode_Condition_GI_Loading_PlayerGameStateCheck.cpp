#include "BED_FSMNode_Condition_GI_Loading_PlayerGameStateCheck.h"

UBED_FSMNode_Condition_GI_Loading_PlayerGameStateCheck::UBED_FSMNode_Condition_GI_Loading_PlayerGameStateCheck() {
    this->Category = TEXT("GI_Loading Condition");
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(2);
}

FString UBED_FSMNode_Condition_GI_Loading_PlayerGameStateCheck::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


