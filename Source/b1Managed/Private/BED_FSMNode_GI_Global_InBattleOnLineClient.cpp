#include "BED_FSMNode_GI_Global_InBattleOnLineClient.h"

UBED_FSMNode_GI_Global_InBattleOnLineClient::UBED_FSMNode_GI_Global_InBattleOnLineClient() {
    this->Category = TEXT("GI_Global State");
    this->InputPins.AddDefaulted(1);
}

void UBED_FSMNode_GI_Global_InBattleOnLineClient::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

FString UBED_FSMNode_GI_Global_InBattleOnLineClient::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


