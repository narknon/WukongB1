#include "BED_FSMNode_Condition_GI_Loading_NeedSwitchPlayerGameMode.h"

UBED_FSMNode_Condition_GI_Loading_NeedSwitchPlayerGameMode::UBED_FSMNode_Condition_GI_Loading_NeedSwitchPlayerGameMode() {
    this->Category = TEXT("GI_Loading Condition");
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(2);
}

FString UBED_FSMNode_Condition_GI_Loading_NeedSwitchPlayerGameMode::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


