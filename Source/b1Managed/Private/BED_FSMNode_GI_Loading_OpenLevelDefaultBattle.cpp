#include "BED_FSMNode_GI_Loading_OpenLevelDefaultBattle.h"

UBED_FSMNode_GI_Loading_OpenLevelDefaultBattle::UBED_FSMNode_GI_Loading_OpenLevelDefaultBattle() {
    this->Category = TEXT("GI_Loading State");
    this->InputPins.AddDefaulted(1);
}

void UBED_FSMNode_GI_Loading_OpenLevelDefaultBattle::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

FString UBED_FSMNode_GI_Loading_OpenLevelDefaultBattle::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


