#include "BED_FSMNode_GI_Global_InBenchMark.h"

UBED_FSMNode_GI_Global_InBenchMark::UBED_FSMNode_GI_Global_InBenchMark() {
    this->Category = TEXT("GI_Global State");
    this->InputPins.AddDefaulted(1);
}

void UBED_FSMNode_GI_Global_InBenchMark::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

FString UBED_FSMNode_GI_Global_InBenchMark::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


