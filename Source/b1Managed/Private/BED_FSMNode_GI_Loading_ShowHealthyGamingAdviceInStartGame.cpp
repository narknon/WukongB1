#include "BED_FSMNode_GI_Loading_ShowHealthyGamingAdviceInStartGame.h"

UBED_FSMNode_GI_Loading_ShowHealthyGamingAdviceInStartGame::UBED_FSMNode_GI_Loading_ShowHealthyGamingAdviceInStartGame() {
    this->Category = TEXT("GI_Loading State");
    this->InputPins.AddDefaulted(1);
}

void UBED_FSMNode_GI_Loading_ShowHealthyGamingAdviceInStartGame::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

FString UBED_FSMNode_GI_Loading_ShowHealthyGamingAdviceInStartGame::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


