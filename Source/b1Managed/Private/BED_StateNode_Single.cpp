#include "BED_StateNode_Single.h"
#include "ECalliopeNodeStyle.h"

UBED_StateNode_Single::UBED_StateNode_Single() {
    this->Category = TEXT("Notifies");
    this->NodeStyle = ECalliopeNodeStyle::SubGraph;
    this->InputPins.AddDefaulted(3);
    this->SubStateMachine = NULL;
    this->SubGraphAssetInstance = NULL;
}

void UBED_StateNode_Single::JumpToEnterStateNode() {
}

bool UBED_StateNode_Single::IsSubGraphNode_Implementation() const {
    return false;
}

void UBED_StateNode_Single::OnSelectNodeInCS_Implementation() const {
}

void UBED_StateNode_Single::PrePropertyChanged_Implementation(const FString& PropertyName) {
}

UObject* UBED_StateNode_Single::GetAssetToEditInCS_Implementation() {
    return NULL;
}

void UBED_StateNode_Single::PostPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

TArray<FName> UBED_StateNode_Single::GetContextInputsInCS_Implementation() {
    return TArray<FName>();
}

void UBED_StateNode_Single::SetSubGraphAssetInPIE_Implementation(UCalliopeAsset* InSubGraphAsset) const {
}

TArray<FName> UBED_StateNode_Single::GetContextOutputsInCS_Implementation() {
    return TArray<FName>();
}

FString UBED_StateNode_Single::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


