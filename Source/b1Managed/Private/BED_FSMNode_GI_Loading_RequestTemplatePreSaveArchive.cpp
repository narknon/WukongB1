#include "BED_FSMNode_GI_Loading_RequestTemplatePreSaveArchive.h"

UBED_FSMNode_GI_Loading_RequestTemplatePreSaveArchive::UBED_FSMNode_GI_Loading_RequestTemplatePreSaveArchive() {
    this->Category = TEXT("GI_Loading State");
    this->InputPins.AddDefaulted(1);
}

void UBED_FSMNode_GI_Loading_RequestTemplatePreSaveArchive::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

FString UBED_FSMNode_GI_Loading_RequestTemplatePreSaveArchive::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


