#include "BED_FSMNode_GI_Global_InBattleParty.h"

UBED_FSMNode_GI_Global_InBattleParty::UBED_FSMNode_GI_Global_InBattleParty() {
    this->Category = TEXT("GI_Global State");
    this->InputPins.AddDefaulted(1);
}

void UBED_FSMNode_GI_Global_InBattleParty::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

FString UBED_FSMNode_GI_Global_InBattleParty::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


