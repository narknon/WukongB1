#include "BED_FSMNode_GI_Loading_GSGEnterBattleLevel.h"

UBED_FSMNode_GI_Loading_GSGEnterBattleLevel::UBED_FSMNode_GI_Loading_GSGEnterBattleLevel() {
    this->Category = TEXT("GI_Loading State");
    this->InputPins.AddDefaulted(1);
}

void UBED_FSMNode_GI_Loading_GSGEnterBattleLevel::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

FString UBED_FSMNode_GI_Loading_GSGEnterBattleLevel::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


