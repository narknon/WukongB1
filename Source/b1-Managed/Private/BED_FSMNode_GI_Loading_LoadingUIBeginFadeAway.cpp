#include "BED_FSMNode_GI_Loading_LoadingUIBeginFadeAway.h"

UBED_FSMNode_GI_Loading_LoadingUIBeginFadeAway::UBED_FSMNode_GI_Loading_LoadingUIBeginFadeAway() {
    this->Category = TEXT("GI_Loading State");
    this->InputPins.AddDefaulted(1);
}

void UBED_FSMNode_GI_Loading_LoadingUIBeginFadeAway::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

FString UBED_FSMNode_GI_Loading_LoadingUIBeginFadeAway::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


