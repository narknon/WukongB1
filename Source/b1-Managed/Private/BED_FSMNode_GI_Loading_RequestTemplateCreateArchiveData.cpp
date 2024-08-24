#include "BED_FSMNode_GI_Loading_RequestTemplateCreateArchiveData.h"

UBED_FSMNode_GI_Loading_RequestTemplateCreateArchiveData::UBED_FSMNode_GI_Loading_RequestTemplateCreateArchiveData() {
    this->Category = TEXT("GI_Loading State");
    this->InputPins.AddDefaulted(1);
}

void UBED_FSMNode_GI_Loading_RequestTemplateCreateArchiveData::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

FString UBED_FSMNode_GI_Loading_RequestTemplateCreateArchiveData::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


