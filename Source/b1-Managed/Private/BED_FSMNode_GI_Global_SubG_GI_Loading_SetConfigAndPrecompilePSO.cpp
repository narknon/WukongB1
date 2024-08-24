#include "BED_FSMNode_GI_Global_SubG_GI_Loading_SetConfigAndPrecompilePSO.h"

UBED_FSMNode_GI_Global_SubG_GI_Loading_SetConfigAndPrecompilePSO::UBED_FSMNode_GI_Global_SubG_GI_Loading_SetConfigAndPrecompilePSO() {
    this->Category = TEXT("GI_Global SubGraph");
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(3);
}

void UBED_FSMNode_GI_Global_SubG_GI_Loading_SetConfigAndPrecompilePSO::OnCreateGraphNodeInCS_Implementation() {
}

FString UBED_FSMNode_GI_Global_SubG_GI_Loading_SetConfigAndPrecompilePSO::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


