#include "BED_FSMNode_Condition_GI_Loading_IsFirstStartGame.h"

UBED_FSMNode_Condition_GI_Loading_IsFirstStartGame::UBED_FSMNode_Condition_GI_Loading_IsFirstStartGame() {
    this->Category = TEXT("GI_Loading Condition");
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(2);
}

FString UBED_FSMNode_Condition_GI_Loading_IsFirstStartGame::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


