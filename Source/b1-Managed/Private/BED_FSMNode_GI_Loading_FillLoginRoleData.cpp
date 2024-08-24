#include "BED_FSMNode_GI_Loading_FillLoginRoleData.h"

UBED_FSMNode_GI_Loading_FillLoginRoleData::UBED_FSMNode_GI_Loading_FillLoginRoleData() {
    this->Category = TEXT("GI_Loading State");
    this->InputPins.AddDefaulted(1);
}

void UBED_FSMNode_GI_Loading_FillLoginRoleData::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

FString UBED_FSMNode_GI_Loading_FillLoginRoleData::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


