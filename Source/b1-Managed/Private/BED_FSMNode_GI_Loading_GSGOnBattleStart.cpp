#include "BED_FSMNode_GI_Loading_GSGOnBattleStart.h"

UBED_FSMNode_GI_Loading_GSGOnBattleStart::UBED_FSMNode_GI_Loading_GSGOnBattleStart() {
    this->Category = TEXT("GI_Loading State");
    this->InputPins.AddDefaulted(1);
}

void UBED_FSMNode_GI_Loading_GSGOnBattleStart::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

FString UBED_FSMNode_GI_Loading_GSGOnBattleStart::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


