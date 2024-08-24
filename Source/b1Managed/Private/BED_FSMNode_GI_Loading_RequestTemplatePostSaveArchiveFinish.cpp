#include "BED_FSMNode_GI_Loading_RequestTemplatePostSaveArchiveFinish.h"

UBED_FSMNode_GI_Loading_RequestTemplatePostSaveArchiveFinish::UBED_FSMNode_GI_Loading_RequestTemplatePostSaveArchiveFinish() {
    this->Category = TEXT("GI_Loading State");
    this->InputPins.AddDefaulted(1);
}

void UBED_FSMNode_GI_Loading_RequestTemplatePostSaveArchiveFinish::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

FString UBED_FSMNode_GI_Loading_RequestTemplatePostSaveArchiveFinish::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


