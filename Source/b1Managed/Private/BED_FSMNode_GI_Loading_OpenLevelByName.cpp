#include "BED_FSMNode_GI_Loading_OpenLevelByName.h"

UBED_FSMNode_GI_Loading_OpenLevelByName::UBED_FSMNode_GI_Loading_OpenLevelByName() {
    this->Category = TEXT("GI_Loading State");
    this->InputPins.AddDefaulted(1);
}

void UBED_FSMNode_GI_Loading_OpenLevelByName::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

FString UBED_FSMNode_GI_Loading_OpenLevelByName::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


