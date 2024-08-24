#include "BED_TaskNode_SubGraph.h"
#include "ECalliopeNodeStyle.h"

UBED_TaskNode_SubGraph::UBED_TaskNode_SubGraph() {
    this->bSupportsContextPins = true;
    this->Category = TEXT("Route");
    this->NodeStyle = ECalliopeNodeStyle::SubGraph;
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
}

UObject* UBED_TaskNode_SubGraph::GetAssetToEditInCS_Implementation() {
    return NULL;
}

void UBED_TaskNode_SubGraph::PrePropertyChanged_Implementation(const FString& PropertyName) {
}

void UBED_TaskNode_SubGraph::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

TArray<FName> UBED_TaskNode_SubGraph::GetContextInputsInCS_Implementation() {
    return TArray<FName>();
}

TArray<FName> UBED_TaskNode_SubGraph::GetContextOutputsInCS_Implementation() {
    return TArray<FName>();
}

FString UBED_TaskNode_SubGraph::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


