#include "BED_FSMNode_GI_Global_AsClientInGame.h"

UBED_FSMNode_GI_Global_AsClientInGame::UBED_FSMNode_GI_Global_AsClientInGame() {
    this->Category = TEXT("GI_Global State");
    this->InputPins.AddDefaulted(1);
}

void UBED_FSMNode_GI_Global_AsClientInGame::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

FString UBED_FSMNode_GI_Global_AsClientInGame::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


