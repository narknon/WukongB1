#include "BED_FSMNode_GI_Global_SubG_GI_Loading_StartNewGame.h"

UBED_FSMNode_GI_Global_SubG_GI_Loading_StartNewGame::UBED_FSMNode_GI_Global_SubG_GI_Loading_StartNewGame() {
    this->Category = TEXT("GI_Global SubGraph");
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
}

void UBED_FSMNode_GI_Global_SubG_GI_Loading_StartNewGame::OnCreateGraphNodeInCS_Implementation() {
}

FString UBED_FSMNode_GI_Global_SubG_GI_Loading_StartNewGame::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


