#include "BED_FSMNode_GI_Global_SubG_GI_Global_BenchMark.h"

UBED_FSMNode_GI_Global_SubG_GI_Global_BenchMark::UBED_FSMNode_GI_Global_SubG_GI_Global_BenchMark() {
    this->Category = TEXT("GI_Global SubGraph");
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(2);
}

void UBED_FSMNode_GI_Global_SubG_GI_Global_BenchMark::OnCreateGraphNodeInCS_Implementation() {
}

FString UBED_FSMNode_GI_Global_SubG_GI_Global_BenchMark::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


