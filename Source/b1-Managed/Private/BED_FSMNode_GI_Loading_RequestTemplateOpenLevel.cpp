#include "BED_FSMNode_GI_Loading_RequestTemplateOpenLevel.h"

UBED_FSMNode_GI_Loading_RequestTemplateOpenLevel::UBED_FSMNode_GI_Loading_RequestTemplateOpenLevel() {
    this->Category = TEXT("GI_Loading State");
    this->InputPins.AddDefaulted(1);
}

void UBED_FSMNode_GI_Loading_RequestTemplateOpenLevel::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

FString UBED_FSMNode_GI_Loading_RequestTemplateOpenLevel::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


