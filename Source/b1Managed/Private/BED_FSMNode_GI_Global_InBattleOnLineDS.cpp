#include "BED_FSMNode_GI_Global_InBattleOnLineDS.h"

UBED_FSMNode_GI_Global_InBattleOnLineDS::UBED_FSMNode_GI_Global_InBattleOnLineDS() {
    this->Category = TEXT("GI_Global State");
    this->InputPins.AddDefaulted(1);
}

void UBED_FSMNode_GI_Global_InBattleOnLineDS::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

FString UBED_FSMNode_GI_Global_InBattleOnLineDS::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


