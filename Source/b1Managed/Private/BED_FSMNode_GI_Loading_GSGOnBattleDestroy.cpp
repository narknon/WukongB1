#include "BED_FSMNode_GI_Loading_GSGOnBattleDestroy.h"

UBED_FSMNode_GI_Loading_GSGOnBattleDestroy::UBED_FSMNode_GI_Loading_GSGOnBattleDestroy() {
    this->Category = TEXT("GI_Loading State");
    this->InputPins.AddDefaulted(1);
}

void UBED_FSMNode_GI_Loading_GSGOnBattleDestroy::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

FString UBED_FSMNode_GI_Loading_GSGOnBattleDestroy::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


