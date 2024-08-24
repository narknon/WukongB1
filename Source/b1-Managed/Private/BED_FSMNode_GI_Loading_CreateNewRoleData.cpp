#include "BED_FSMNode_GI_Loading_CreateNewRoleData.h"

UBED_FSMNode_GI_Loading_CreateNewRoleData::UBED_FSMNode_GI_Loading_CreateNewRoleData() {
    this->Category = TEXT("GI_Loading State");
    this->InputPins.AddDefaulted(1);
}

void UBED_FSMNode_GI_Loading_CreateNewRoleData::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

FString UBED_FSMNode_GI_Loading_CreateNewRoleData::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


