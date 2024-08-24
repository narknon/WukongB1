#include "BED_FSMNode_GI_Loading_ShowGameDisclaimerInStartGame.h"

UBED_FSMNode_GI_Loading_ShowGameDisclaimerInStartGame::UBED_FSMNode_GI_Loading_ShowGameDisclaimerInStartGame() {
    this->Category = TEXT("GI_Loading State");
    this->InputPins.AddDefaulted(1);
}

void UBED_FSMNode_GI_Loading_ShowGameDisclaimerInStartGame::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

FString UBED_FSMNode_GI_Loading_ShowGameDisclaimerInStartGame::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


