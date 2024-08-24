#include "BED_FSMNode_GI_Loading_ShowLogoInStartGame.h"

UBED_FSMNode_GI_Loading_ShowLogoInStartGame::UBED_FSMNode_GI_Loading_ShowLogoInStartGame() {
    this->Category = TEXT("GI_Loading State");
    this->InputPins.AddDefaulted(1);
}

void UBED_FSMNode_GI_Loading_ShowLogoInStartGame::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

FString UBED_FSMNode_GI_Loading_ShowLogoInStartGame::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


