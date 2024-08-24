#include "BED_FSMNode_GI_Loading_RequestTemplatePreLeaveLevel.h"

UBED_FSMNode_GI_Loading_RequestTemplatePreLeaveLevel::UBED_FSMNode_GI_Loading_RequestTemplatePreLeaveLevel() {
    this->Category = TEXT("GI_Loading State");
    this->InputPins.AddDefaulted(1);
}

void UBED_FSMNode_GI_Loading_RequestTemplatePreLeaveLevel::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

FString UBED_FSMNode_GI_Loading_RequestTemplatePreLeaveLevel::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


