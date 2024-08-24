#include "BED_FSMNode_GI_Global_InBattleStandAlone.h"

UBED_FSMNode_GI_Global_InBattleStandAlone::UBED_FSMNode_GI_Global_InBattleStandAlone() {
    this->Category = TEXT("GI_Global State");
    this->InputPins.AddDefaulted(1);
}

void UBED_FSMNode_GI_Global_InBattleStandAlone::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

FString UBED_FSMNode_GI_Global_InBattleStandAlone::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


