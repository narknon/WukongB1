#include "BED_FSMNode_GI_Global_SubG_GI_Loading_PreEnterMainMenu.h"

UBED_FSMNode_GI_Global_SubG_GI_Loading_PreEnterMainMenu::UBED_FSMNode_GI_Global_SubG_GI_Loading_PreEnterMainMenu() {
    this->Category = TEXT("GI_Global SubGraph");
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
}

void UBED_FSMNode_GI_Global_SubG_GI_Loading_PreEnterMainMenu::OnCreateGraphNodeInCS_Implementation() {
}

FString UBED_FSMNode_GI_Global_SubG_GI_Loading_PreEnterMainMenu::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


