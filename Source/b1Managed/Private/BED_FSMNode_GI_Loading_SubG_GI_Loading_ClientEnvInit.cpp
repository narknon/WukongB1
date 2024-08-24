#include "BED_FSMNode_GI_Loading_SubG_GI_Loading_ClientEnvInit.h"

UBED_FSMNode_GI_Loading_SubG_GI_Loading_ClientEnvInit::UBED_FSMNode_GI_Loading_SubG_GI_Loading_ClientEnvInit() {
    this->Category = TEXT("GI_Loading SubGraph");
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
}

void UBED_FSMNode_GI_Loading_SubG_GI_Loading_ClientEnvInit::OnCreateGraphNodeInCS_Implementation() {
}

FString UBED_FSMNode_GI_Loading_SubG_GI_Loading_ClientEnvInit::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


