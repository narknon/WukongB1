#include "BED_FSMNode_GI_Loading_WaitLevelStreamingLoad.h"

UBED_FSMNode_GI_Loading_WaitLevelStreamingLoad::UBED_FSMNode_GI_Loading_WaitLevelStreamingLoad() {
    this->Category = TEXT("GI_Loading State");
    this->InputPins.AddDefaulted(1);
}

void UBED_FSMNode_GI_Loading_WaitLevelStreamingLoad::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

FString UBED_FSMNode_GI_Loading_WaitLevelStreamingLoad::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


