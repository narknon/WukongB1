#include "BED_FSMNode_GI_Loading_FillLocalBPCRoleData.h"

UBED_FSMNode_GI_Loading_FillLocalBPCRoleData::UBED_FSMNode_GI_Loading_FillLocalBPCRoleData() {
    this->Category = TEXT("GI_Loading State");
    this->InputPins.AddDefaulted(1);
}

void UBED_FSMNode_GI_Loading_FillLocalBPCRoleData::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

FString UBED_FSMNode_GI_Loading_FillLocalBPCRoleData::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


