#include "BED_FSMNode_GI_Loading_ResumeGame.h"

UBED_FSMNode_GI_Loading_ResumeGame::UBED_FSMNode_GI_Loading_ResumeGame() {
    this->Category = TEXT("GI_Loading State");
    this->InputPins.AddDefaulted(1);
}

void UBED_FSMNode_GI_Loading_ResumeGame::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

FString UBED_FSMNode_GI_Loading_ResumeGame::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


