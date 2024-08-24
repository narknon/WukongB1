#include "BED_FSMNode_GI_Global_SubG_GI_Loading_GameLevelPass.h"

UBED_FSMNode_GI_Global_SubG_GI_Loading_GameLevelPass::UBED_FSMNode_GI_Global_SubG_GI_Loading_GameLevelPass() {
    this->Category = TEXT("GI_Global SubGraph");
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
}

void UBED_FSMNode_GI_Global_SubG_GI_Loading_GameLevelPass::OnCreateGraphNodeInCS_Implementation() {
}

FString UBED_FSMNode_GI_Global_SubG_GI_Loading_GameLevelPass::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


