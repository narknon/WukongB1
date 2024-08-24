#include "BED_FSMNode_GI_Loading_GSGShowBattleUI.h"

UBED_FSMNode_GI_Loading_GSGShowBattleUI::UBED_FSMNode_GI_Loading_GSGShowBattleUI() {
    this->Category = TEXT("GI_Loading State");
    this->InputPins.AddDefaulted(1);
}

void UBED_FSMNode_GI_Loading_GSGShowBattleUI::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

FString UBED_FSMNode_GI_Loading_GSGShowBattleUI::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


