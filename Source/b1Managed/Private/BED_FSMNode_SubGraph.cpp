#include "BED_FSMNode_SubGraph.h"
#include "ECalliopeNodeStyle.h"

UBED_FSMNode_SubGraph::UBED_FSMNode_SubGraph() {
    this->NodeStyle = ECalliopeNodeStyle::SubGraph;
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
}

UObject* UBED_FSMNode_SubGraph::GetAssetToEditInCS_Implementation() {
    return NULL;
}

void UBED_FSMNode_SubGraph::PrePropertyChanged_Implementation(const FString& PropertyName) {
}

void UBED_FSMNode_SubGraph::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

FString UBED_FSMNode_SubGraph::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


