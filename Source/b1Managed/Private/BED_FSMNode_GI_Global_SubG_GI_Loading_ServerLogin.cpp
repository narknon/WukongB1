#include "BED_FSMNode_GI_Global_SubG_GI_Loading_ServerLogin.h"

UBED_FSMNode_GI_Global_SubG_GI_Loading_ServerLogin::UBED_FSMNode_GI_Global_SubG_GI_Loading_ServerLogin() {
    this->Category = TEXT("GI_Global SubGraph");
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
}

void UBED_FSMNode_GI_Global_SubG_GI_Loading_ServerLogin::OnCreateGraphNodeInCS_Implementation() {
}

FString UBED_FSMNode_GI_Global_SubG_GI_Loading_ServerLogin::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


