#include "BED_TaskNode_RunProcessGraph.h"
#include "ECalliopeNodeStyle.h"

UBED_TaskNode_RunProcessGraph::UBED_TaskNode_RunProcessGraph() {
    this->Category = TEXT("Route");
    this->NodeStyle = ECalliopeNodeStyle::SubGraph;
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(2);
}

UObject* UBED_TaskNode_RunProcessGraph::GetAssetToEditInCS_Implementation() {
    return NULL;
}

void UBED_TaskNode_RunProcessGraph::PrePropertyChanged_Implementation(const FString& PropertyName) {
}

void UBED_TaskNode_RunProcessGraph::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

FString UBED_TaskNode_RunProcessGraph::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


