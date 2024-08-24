#include "BED_FSMNode_GI_Loading_RequestTemplateLoadArchiveData.h"

UBED_FSMNode_GI_Loading_RequestTemplateLoadArchiveData::UBED_FSMNode_GI_Loading_RequestTemplateLoadArchiveData() {
    this->Category = TEXT("GI_Loading State");
    this->InputPins.AddDefaulted(1);
}

void UBED_FSMNode_GI_Loading_RequestTemplateLoadArchiveData::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

FString UBED_FSMNode_GI_Loading_RequestTemplateLoadArchiveData::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


