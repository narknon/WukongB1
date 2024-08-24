#include "BED_FSMNode_GI_Global_SubG_GI_Loading_ReplayBattle.h"

UBED_FSMNode_GI_Global_SubG_GI_Loading_ReplayBattle::UBED_FSMNode_GI_Global_SubG_GI_Loading_ReplayBattle() {
    this->Category = TEXT("GI_Global SubGraph");
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
}

void UBED_FSMNode_GI_Global_SubG_GI_Loading_ReplayBattle::OnCreateGraphNodeInCS_Implementation() {
}

FString UBED_FSMNode_GI_Global_SubG_GI_Loading_ReplayBattle::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


