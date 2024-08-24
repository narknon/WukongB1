#include "BED_FSMNode_GI_Global_SubG_GI_Loading_CheckGSSdkServerConfig.h"

UBED_FSMNode_GI_Global_SubG_GI_Loading_CheckGSSdkServerConfig::UBED_FSMNode_GI_Global_SubG_GI_Loading_CheckGSSdkServerConfig() {
    this->Category = TEXT("GI_Global SubGraph");
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
}

void UBED_FSMNode_GI_Global_SubG_GI_Loading_CheckGSSdkServerConfig::OnCreateGraphNodeInCS_Implementation() {
}

FString UBED_FSMNode_GI_Global_SubG_GI_Loading_CheckGSSdkServerConfig::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


