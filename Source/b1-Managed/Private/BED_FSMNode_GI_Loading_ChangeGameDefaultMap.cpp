#include "BED_FSMNode_GI_Loading_ChangeGameDefaultMap.h"

UBED_FSMNode_GI_Loading_ChangeGameDefaultMap::UBED_FSMNode_GI_Loading_ChangeGameDefaultMap() {
    this->Category = TEXT("GI_Loading State");
    this->InputPins.AddDefaulted(1);
}

void UBED_FSMNode_GI_Loading_ChangeGameDefaultMap::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

FString UBED_FSMNode_GI_Loading_ChangeGameDefaultMap::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


