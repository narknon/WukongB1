#include "BED_FSMNode_GI_Loading_SubG_GI_Loading_GSLogin.h"

UBED_FSMNode_GI_Loading_SubG_GI_Loading_GSLogin::UBED_FSMNode_GI_Loading_SubG_GI_Loading_GSLogin() {
    this->Category = TEXT("GI_Loading SubGraph");
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
}

void UBED_FSMNode_GI_Loading_SubG_GI_Loading_GSLogin::OnCreateGraphNodeInCS_Implementation() {
}

FString UBED_FSMNode_GI_Loading_SubG_GI_Loading_GSLogin::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


