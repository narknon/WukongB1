#include "BED_FSMNode_GI_Loading_OpenLevelStartUp.h"

UBED_FSMNode_GI_Loading_OpenLevelStartUp::UBED_FSMNode_GI_Loading_OpenLevelStartUp() {
    this->Category = TEXT("GI_Loading State");
    this->InputPins.AddDefaulted(1);
}

void UBED_FSMNode_GI_Loading_OpenLevelStartUp::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

FString UBED_FSMNode_GI_Loading_OpenLevelStartUp::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


