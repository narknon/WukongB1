#include "BED_FSMNode_GI_Loading_PrepareFadeAway.h"

UBED_FSMNode_GI_Loading_PrepareFadeAway::UBED_FSMNode_GI_Loading_PrepareFadeAway() {
    this->Category = TEXT("GI_Loading State");
    this->InputPins.AddDefaulted(1);
}

void UBED_FSMNode_GI_Loading_PrepareFadeAway::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

FString UBED_FSMNode_GI_Loading_PrepareFadeAway::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


