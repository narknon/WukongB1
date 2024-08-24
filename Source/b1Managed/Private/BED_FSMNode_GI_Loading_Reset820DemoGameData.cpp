#include "BED_FSMNode_GI_Loading_Reset820DemoGameData.h"

UBED_FSMNode_GI_Loading_Reset820DemoGameData::UBED_FSMNode_GI_Loading_Reset820DemoGameData() {
    this->Category = TEXT("GI_Loading State");
    this->InputPins.AddDefaulted(1);
}

void UBED_FSMNode_GI_Loading_Reset820DemoGameData::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

FString UBED_FSMNode_GI_Loading_Reset820DemoGameData::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


