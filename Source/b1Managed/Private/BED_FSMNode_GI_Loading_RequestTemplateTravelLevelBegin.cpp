#include "BED_FSMNode_GI_Loading_RequestTemplateTravelLevelBegin.h"

UBED_FSMNode_GI_Loading_RequestTemplateTravelLevelBegin::UBED_FSMNode_GI_Loading_RequestTemplateTravelLevelBegin() {
    this->Category = TEXT("GI_Loading State");
    this->InputPins.AddDefaulted(1);
}

void UBED_FSMNode_GI_Loading_RequestTemplateTravelLevelBegin::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

FString UBED_FSMNode_GI_Loading_RequestTemplateTravelLevelBegin::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}

