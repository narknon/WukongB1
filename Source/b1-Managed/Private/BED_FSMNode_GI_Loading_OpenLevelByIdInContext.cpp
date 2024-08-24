#include "BED_FSMNode_GI_Loading_OpenLevelByIdInContext.h"

UBED_FSMNode_GI_Loading_OpenLevelByIdInContext::UBED_FSMNode_GI_Loading_OpenLevelByIdInContext() {
    this->Category = TEXT("GI_Loading State");
    this->InputPins.AddDefaulted(1);
}

void UBED_FSMNode_GI_Loading_OpenLevelByIdInContext::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

FString UBED_FSMNode_GI_Loading_OpenLevelByIdInContext::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


