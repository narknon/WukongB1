#include "BED_FSMNode_GI_Loading_GSGBtlOnBattleDestroy.h"

UBED_FSMNode_GI_Loading_GSGBtlOnBattleDestroy::UBED_FSMNode_GI_Loading_GSGBtlOnBattleDestroy() {
    this->Category = TEXT("GI_Loading State");
    this->InputPins.AddDefaulted(1);
}

void UBED_FSMNode_GI_Loading_GSGBtlOnBattleDestroy::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

FString UBED_FSMNode_GI_Loading_GSGBtlOnBattleDestroy::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


