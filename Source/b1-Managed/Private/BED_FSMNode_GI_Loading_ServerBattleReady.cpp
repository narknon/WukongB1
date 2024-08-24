#include "BED_FSMNode_GI_Loading_ServerBattleReady.h"

UBED_FSMNode_GI_Loading_ServerBattleReady::UBED_FSMNode_GI_Loading_ServerBattleReady() {
    this->Category = TEXT("GI_Loading State");
    this->InputPins.AddDefaulted(1);
}

void UBED_FSMNode_GI_Loading_ServerBattleReady::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

FString UBED_FSMNode_GI_Loading_ServerBattleReady::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


