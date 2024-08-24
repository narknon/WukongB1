#include "BED_QuestNode_SubGraph.h"
#include "ECalliopeNodeStyle.h"

UBED_QuestNode_SubGraph::UBED_QuestNode_SubGraph() {
    this->bSupportsContextPins = true;
    this->Category = TEXT("Route");
    this->NodeStyle = ECalliopeNodeStyle::SubGraph;
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
}

UObject* UBED_QuestNode_SubGraph::GetAssetToEditInCS_Implementation() {
    return NULL;
}

void UBED_QuestNode_SubGraph::PrePropertyChanged_Implementation(const FString& PropertyName) {
}

void UBED_QuestNode_SubGraph::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

TArray<FName> UBED_QuestNode_SubGraph::GetContextInputsInCS_Implementation() {
    return TArray<FName>();
}

TArray<FName> UBED_QuestNode_SubGraph::GetContextOutputsInCS_Implementation() {
    return TArray<FName>();
}

FString UBED_QuestNode_SubGraph::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


