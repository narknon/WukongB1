#include "BED_FSMNode_GI_Global_SubG_GI_Loading_StartUp.h"

UBED_FSMNode_GI_Global_SubG_GI_Loading_StartUp::UBED_FSMNode_GI_Global_SubG_GI_Loading_StartUp() {
    this->Category = TEXT("GI_Global SubGraph");
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(2);
}

void UBED_FSMNode_GI_Global_SubG_GI_Loading_StartUp::OnCreateGraphNodeInCS_Implementation() {
}

FString UBED_FSMNode_GI_Global_SubG_GI_Loading_StartUp::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


