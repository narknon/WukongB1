#include "BED_FSMNode_GI_Global_SubG_GI_Loading_Teleport.h"

UBED_FSMNode_GI_Global_SubG_GI_Loading_Teleport::UBED_FSMNode_GI_Global_SubG_GI_Loading_Teleport() {
    this->Category = TEXT("GI_Global SubGraph");
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
}

void UBED_FSMNode_GI_Global_SubG_GI_Loading_Teleport::OnCreateGraphNodeInCS_Implementation() {
}

FString UBED_FSMNode_GI_Global_SubG_GI_Loading_Teleport::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


