#include "BED_FSMNode_Condition_GI_Loading_IsInDefaultBattleLevel.h"

UBED_FSMNode_Condition_GI_Loading_IsInDefaultBattleLevel::UBED_FSMNode_Condition_GI_Loading_IsInDefaultBattleLevel() {
    this->Category = TEXT("GI_Loading Condition");
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(2);
}

FString UBED_FSMNode_Condition_GI_Loading_IsInDefaultBattleLevel::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


