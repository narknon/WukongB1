#include "BED_FSMNode_GI_Loading_InitLocalPlayerContainer.h"

UBED_FSMNode_GI_Loading_InitLocalPlayerContainer::UBED_FSMNode_GI_Loading_InitLocalPlayerContainer() {
    this->Category = TEXT("GI_Loading State");
    this->InputPins.AddDefaulted(1);
}

void UBED_FSMNode_GI_Loading_InitLocalPlayerContainer::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

FString UBED_FSMNode_GI_Loading_InitLocalPlayerContainer::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


