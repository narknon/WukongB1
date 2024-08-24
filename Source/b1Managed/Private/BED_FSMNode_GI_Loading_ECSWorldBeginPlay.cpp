#include "BED_FSMNode_GI_Loading_ECSWorldBeginPlay.h"

UBED_FSMNode_GI_Loading_ECSWorldBeginPlay::UBED_FSMNode_GI_Loading_ECSWorldBeginPlay() {
    this->Category = TEXT("GI_Loading State");
    this->InputPins.AddDefaulted(1);
}

void UBED_FSMNode_GI_Loading_ECSWorldBeginPlay::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

FString UBED_FSMNode_GI_Loading_ECSWorldBeginPlay::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


