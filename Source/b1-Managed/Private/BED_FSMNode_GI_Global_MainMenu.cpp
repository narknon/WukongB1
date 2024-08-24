#include "BED_FSMNode_GI_Global_MainMenu.h"

UBED_FSMNode_GI_Global_MainMenu::UBED_FSMNode_GI_Global_MainMenu() {
    this->Category = TEXT("GI_Global State");
    this->InputPins.AddDefaulted(1);
}

void UBED_FSMNode_GI_Global_MainMenu::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

FString UBED_FSMNode_GI_Global_MainMenu::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


