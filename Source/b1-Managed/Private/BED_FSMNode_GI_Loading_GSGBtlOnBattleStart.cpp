#include "BED_FSMNode_GI_Loading_GSGBtlOnBattleStart.h"

UBED_FSMNode_GI_Loading_GSGBtlOnBattleStart::UBED_FSMNode_GI_Loading_GSGBtlOnBattleStart() {
    this->Category = TEXT("GI_Loading State");
    this->InputPins.AddDefaulted(1);
}

void UBED_FSMNode_GI_Loading_GSGBtlOnBattleStart::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

FString UBED_FSMNode_GI_Loading_GSGBtlOnBattleStart::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


