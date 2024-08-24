#include "BED_FSMNode_GI_Loading_PlayerDataInitPreEnterLevel.h"

UBED_FSMNode_GI_Loading_PlayerDataInitPreEnterLevel::UBED_FSMNode_GI_Loading_PlayerDataInitPreEnterLevel() {
    this->Category = TEXT("GI_Loading State");
    this->InputPins.AddDefaulted(1);
}

void UBED_FSMNode_GI_Loading_PlayerDataInitPreEnterLevel::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

FString UBED_FSMNode_GI_Loading_PlayerDataInitPreEnterLevel::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


