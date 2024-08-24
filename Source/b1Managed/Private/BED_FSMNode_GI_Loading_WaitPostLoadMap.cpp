#include "BED_FSMNode_GI_Loading_WaitPostLoadMap.h"

UBED_FSMNode_GI_Loading_WaitPostLoadMap::UBED_FSMNode_GI_Loading_WaitPostLoadMap() {
    this->Category = TEXT("GI_Loading State");
    this->InputPins.AddDefaulted(1);
}

void UBED_FSMNode_GI_Loading_WaitPostLoadMap::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

FString UBED_FSMNode_GI_Loading_WaitPostLoadMap::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


