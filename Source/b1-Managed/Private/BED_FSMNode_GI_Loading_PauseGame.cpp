#include "BED_FSMNode_GI_Loading_PauseGame.h"

UBED_FSMNode_GI_Loading_PauseGame::UBED_FSMNode_GI_Loading_PauseGame() {
    this->Category = TEXT("GI_Loading State");
    this->InputPins.AddDefaulted(1);
}

void UBED_FSMNode_GI_Loading_PauseGame::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

FString UBED_FSMNode_GI_Loading_PauseGame::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


