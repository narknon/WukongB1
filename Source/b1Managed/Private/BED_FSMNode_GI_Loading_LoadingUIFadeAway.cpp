#include "BED_FSMNode_GI_Loading_LoadingUIFadeAway.h"

UBED_FSMNode_GI_Loading_LoadingUIFadeAway::UBED_FSMNode_GI_Loading_LoadingUIFadeAway() {
    this->Category = TEXT("GI_Loading State");
    this->InputPins.AddDefaulted(1);
}

void UBED_FSMNode_GI_Loading_LoadingUIFadeAway::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

FString UBED_FSMNode_GI_Loading_LoadingUIFadeAway::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


