#include "BED_FSMNode_GI_Loading_FillIsInToilet.h"

UBED_FSMNode_GI_Loading_FillIsInToilet::UBED_FSMNode_GI_Loading_FillIsInToilet() {
    this->Category = TEXT("GI_Loading State");
    this->InputPins.AddDefaulted(1);
}

void UBED_FSMNode_GI_Loading_FillIsInToilet::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

FString UBED_FSMNode_GI_Loading_FillIsInToilet::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


