#include "BED_FSMNode_GI_Loading_SubG_GI_Loading_HideLoadingUI.h"

UBED_FSMNode_GI_Loading_SubG_GI_Loading_HideLoadingUI::UBED_FSMNode_GI_Loading_SubG_GI_Loading_HideLoadingUI() {
    this->Category = TEXT("GI_Loading SubGraph");
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
}

void UBED_FSMNode_GI_Loading_SubG_GI_Loading_HideLoadingUI::OnCreateGraphNodeInCS_Implementation() {
}

FString UBED_FSMNode_GI_Loading_SubG_GI_Loading_HideLoadingUI::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


