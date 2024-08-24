#include "BED_FSMNode_GI_Global_SubG_GI_Loading_BackToMainMenu.h"

UBED_FSMNode_GI_Global_SubG_GI_Loading_BackToMainMenu::UBED_FSMNode_GI_Global_SubG_GI_Loading_BackToMainMenu() {
    this->Category = TEXT("GI_Global SubGraph");
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
}

void UBED_FSMNode_GI_Global_SubG_GI_Loading_BackToMainMenu::OnCreateGraphNodeInCS_Implementation() {
}

FString UBED_FSMNode_GI_Global_SubG_GI_Loading_BackToMainMenu::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


