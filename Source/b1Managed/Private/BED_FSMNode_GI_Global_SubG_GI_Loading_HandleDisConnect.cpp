#include "BED_FSMNode_GI_Global_SubG_GI_Loading_HandleDisConnect.h"

UBED_FSMNode_GI_Global_SubG_GI_Loading_HandleDisConnect::UBED_FSMNode_GI_Global_SubG_GI_Loading_HandleDisConnect() {
    this->Category = TEXT("GI_Global SubGraph");
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
}

void UBED_FSMNode_GI_Global_SubG_GI_Loading_HandleDisConnect::OnCreateGraphNodeInCS_Implementation() {
}

FString UBED_FSMNode_GI_Global_SubG_GI_Loading_HandleDisConnect::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


