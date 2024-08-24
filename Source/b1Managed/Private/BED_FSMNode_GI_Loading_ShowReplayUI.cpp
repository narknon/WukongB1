#include "BED_FSMNode_GI_Loading_ShowReplayUI.h"

UBED_FSMNode_GI_Loading_ShowReplayUI::UBED_FSMNode_GI_Loading_ShowReplayUI() {
    this->Category = TEXT("GI_Loading State");
    this->InputPins.AddDefaulted(1);
}

void UBED_FSMNode_GI_Loading_ShowReplayUI::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

FString UBED_FSMNode_GI_Loading_ShowReplayUI::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


