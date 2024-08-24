#include "BED_FSMNode_GI_Loading_QuitGame.h"

UBED_FSMNode_GI_Loading_QuitGame::UBED_FSMNode_GI_Loading_QuitGame() {
    this->Category = TEXT("GI_Loading State");
    this->InputPins.AddDefaulted(1);
}

void UBED_FSMNode_GI_Loading_QuitGame::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

FString UBED_FSMNode_GI_Loading_QuitGame::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


