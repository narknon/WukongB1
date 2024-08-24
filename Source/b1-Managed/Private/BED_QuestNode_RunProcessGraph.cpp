#include "BED_QuestNode_RunProcessGraph.h"
#include "ECalliopeNodeStyle.h"

UBED_QuestNode_RunProcessGraph::UBED_QuestNode_RunProcessGraph() {
    this->Category = TEXT("Route");
    this->NodeStyle = ECalliopeNodeStyle::SubGraph;
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(2);
}

UObject* UBED_QuestNode_RunProcessGraph::GetAssetToEditInCS_Implementation() {
    return NULL;
}

void UBED_QuestNode_RunProcessGraph::PrePropertyChanged_Implementation(const FString& PropertyName) {
}

void UBED_QuestNode_RunProcessGraph::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

FString UBED_QuestNode_RunProcessGraph::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


