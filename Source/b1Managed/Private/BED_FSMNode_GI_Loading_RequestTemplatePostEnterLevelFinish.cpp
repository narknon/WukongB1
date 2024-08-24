#include "BED_FSMNode_GI_Loading_RequestTemplatePostEnterLevelFinish.h"

UBED_FSMNode_GI_Loading_RequestTemplatePostEnterLevelFinish::UBED_FSMNode_GI_Loading_RequestTemplatePostEnterLevelFinish() {
    this->Category = TEXT("GI_Loading State");
    this->InputPins.AddDefaulted(1);
}

void UBED_FSMNode_GI_Loading_RequestTemplatePostEnterLevelFinish::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

FString UBED_FSMNode_GI_Loading_RequestTemplatePostEnterLevelFinish::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


