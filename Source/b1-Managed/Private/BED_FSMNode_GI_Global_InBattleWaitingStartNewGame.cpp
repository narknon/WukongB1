#include "BED_FSMNode_GI_Global_InBattleWaitingStartNewGame.h"

UBED_FSMNode_GI_Global_InBattleWaitingStartNewGame::UBED_FSMNode_GI_Global_InBattleWaitingStartNewGame() {
    this->Category = TEXT("GI_Global State");
    this->InputPins.AddDefaulted(1);
}

void UBED_FSMNode_GI_Global_InBattleWaitingStartNewGame::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

FString UBED_FSMNode_GI_Global_InBattleWaitingStartNewGame::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


