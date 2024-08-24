#include "BED_FSMNode_GI_Loading_GSGEnterLevel.h"

UBED_FSMNode_GI_Loading_GSGEnterLevel::UBED_FSMNode_GI_Loading_GSGEnterLevel() {
    this->Category = TEXT("GI_Loading State");
    this->InputPins.AddDefaulted(1);
}

void UBED_FSMNode_GI_Loading_GSGEnterLevel::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

FString UBED_FSMNode_GI_Loading_GSGEnterLevel::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


