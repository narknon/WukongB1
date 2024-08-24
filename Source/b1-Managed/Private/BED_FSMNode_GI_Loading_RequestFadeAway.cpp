#include "BED_FSMNode_GI_Loading_RequestFadeAway.h"

UBED_FSMNode_GI_Loading_RequestFadeAway::UBED_FSMNode_GI_Loading_RequestFadeAway() {
    this->Category = TEXT("GI_Loading State");
    this->InputPins.AddDefaulted(1);
    this->WaitSecond = 0.00f;
}

void UBED_FSMNode_GI_Loading_RequestFadeAway::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

FString UBED_FSMNode_GI_Loading_RequestFadeAway::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


