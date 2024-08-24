#include "BED_FSMNode_GI_Loading_ShowArchiveMarkInStartGame.h"

UBED_FSMNode_GI_Loading_ShowArchiveMarkInStartGame::UBED_FSMNode_GI_Loading_ShowArchiveMarkInStartGame() {
    this->Category = TEXT("GI_Loading State");
    this->InputPins.AddDefaulted(1);
}

void UBED_FSMNode_GI_Loading_ShowArchiveMarkInStartGame::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

FString UBED_FSMNode_GI_Loading_ShowArchiveMarkInStartGame::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


