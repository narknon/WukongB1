#include "BED_FSMNode_GI_Loading_RequestTemplatePostGSLoginFinish.h"

UBED_FSMNode_GI_Loading_RequestTemplatePostGSLoginFinish::UBED_FSMNode_GI_Loading_RequestTemplatePostGSLoginFinish() {
    this->Category = TEXT("GI_Loading State");
    this->InputPins.AddDefaulted(1);
}

void UBED_FSMNode_GI_Loading_RequestTemplatePostGSLoginFinish::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

FString UBED_FSMNode_GI_Loading_RequestTemplatePostGSLoginFinish::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


