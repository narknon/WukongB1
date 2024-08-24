#include "BED_FSMNode_GI_Loading_LoginByRoleData.h"

UBED_FSMNode_GI_Loading_LoginByRoleData::UBED_FSMNode_GI_Loading_LoginByRoleData() {
    this->Category = TEXT("GI_Loading State");
    this->InputPins.AddDefaulted(1);
}

void UBED_FSMNode_GI_Loading_LoginByRoleData::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

FString UBED_FSMNode_GI_Loading_LoginByRoleData::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


