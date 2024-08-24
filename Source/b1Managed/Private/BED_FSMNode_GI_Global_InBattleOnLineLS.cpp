#include "BED_FSMNode_GI_Global_InBattleOnLineLS.h"

UBED_FSMNode_GI_Global_InBattleOnLineLS::UBED_FSMNode_GI_Global_InBattleOnLineLS() {
    this->Category = TEXT("GI_Global State");
    this->InputPins.AddDefaulted(1);
}

void UBED_FSMNode_GI_Global_InBattleOnLineLS::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

FString UBED_FSMNode_GI_Global_InBattleOnLineLS::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


