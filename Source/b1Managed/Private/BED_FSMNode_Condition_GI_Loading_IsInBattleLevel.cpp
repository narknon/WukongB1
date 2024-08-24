#include "BED_FSMNode_Condition_GI_Loading_IsInBattleLevel.h"

UBED_FSMNode_Condition_GI_Loading_IsInBattleLevel::UBED_FSMNode_Condition_GI_Loading_IsInBattleLevel() {
    this->Category = TEXT("GI_Loading Condition");
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(2);
}

FString UBED_FSMNode_Condition_GI_Loading_IsInBattleLevel::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


