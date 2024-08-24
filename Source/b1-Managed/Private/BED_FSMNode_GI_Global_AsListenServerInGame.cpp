#include "BED_FSMNode_GI_Global_AsListenServerInGame.h"

UBED_FSMNode_GI_Global_AsListenServerInGame::UBED_FSMNode_GI_Global_AsListenServerInGame() {
    this->Category = TEXT("GI_Global State");
    this->InputPins.AddDefaulted(1);
}

void UBED_FSMNode_GI_Global_AsListenServerInGame::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

FString UBED_FSMNode_GI_Global_AsListenServerInGame::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


