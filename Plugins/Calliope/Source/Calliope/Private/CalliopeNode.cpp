#include "CalliopeNode.h"

UCalliopeNode::UCalliopeNode() {
    this->GraphNode = NULL;
    this->bSupportsContextPins = false;
    this->Category = TEXT("Uncategorized");
    this->NodeStyle = ECalliopeNodeStyle::Default;
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
    this->bNodeHasError = false;
    this->bBossPhaseRequireActive = false;
    this->NodeIndex = -1;
}

void UCalliopeNode::UnBindAssetOnSubGraphReconstructionRequested(UCalliopeAsset* Asset) {
}

void UCalliopeNode::SyncSceneObjPoliceConfig() {
}


void UCalliopeNode::SetOutputPins(const TArray<FCalliopePin>& InOutputPins) {
}

void UCalliopeNode::SetInputPins(const TArray<FCalliopePin>& InInputPins) {
}

void UCalliopeNode::SetConnections(TMap<FName, FCalliopeConnectedPin>& InConnections) {
}

void UCalliopeNode::ResetRecordsInCS() {
}

void UCalliopeNode::RefreshSceneObjPoliceConfig(UCalliopeNode* PreviousNode) {
}

void UCalliopeNode::RefreshParentNode() {
}

void UCalliopeNode::RecordOutput(const FName& PinName) {
}

void UCalliopeNode::RecordInput(const FName& PinName) {
}






void UCalliopeNode::LogError(const FString& Message) {
}

UCalliopeAsset* UCalliopeNode::LoadAssetInCS(TSoftObjectPtr<UCalliopeAsset> AssetPtr) {
    return NULL;
}

void UCalliopeNode::JumpToMe() {
}


bool UCalliopeNode::IsSubGraphNode_Implementation() const {
    return false;
}



bool UCalliopeNode::IsOutputConnectTo(FCalliopeGuid TargetNodeGuid) const {
    return false;
}

bool UCalliopeNode::IsCalliopeWasActive() {
    return false;
}

bool UCalliopeNode::IsCalliopeNeverActivated() {
    return false;
}

bool UCalliopeNode::IsCalliopeActive() {
    return false;
}


bool UCalliopeNode::IsBattleStateNode_Implementation() {
    return false;
}


TArray<FCalliopeGuid> UCalliopeNode::GetParentNodes() const {
    return TArray<FCalliopeGuid>();
}

TArray<FCalliopePin> UCalliopeNode::GetOutputPins() const {
    return TArray<FCalliopePin>();
}

TArray<FName> UCalliopeNode::GetOutputNames() const {
    return TArray<FName>();
}


TArray<FCalliopePin> UCalliopeNode::GetInputPins() const {
    return TArray<FCalliopePin>();
}

TArray<FName> UCalliopeNode::GetInputNames() const {
    return TArray<FName>();
}


UEdGraphNode* UCalliopeNode::GetGraphNodeInCS() const {
    return NULL;
}

bool UCalliopeNode::GetGraphIdentifierInCS(FName& OutGraphIdentifier) const {
    return false;
}

bool UCalliopeNode::GetGraphGuidInCS(FCalliopeGuid& OutGraphGuid) const {
    return false;
}

FCalliopePin UCalliopeNode::GetDefaultOutputPin() {
    return FCalliopePin{};
}

FCalliopePin UCalliopeNode::GetDefaultInputPin() {
    return FCalliopePin{};
}

TArray<FName> UCalliopeNode::GetContextOutputsInCS_Implementation() {
    return TArray<FName>();
}

TArray<FName> UCalliopeNode::GetContextInputsInCS_Implementation() {
    return TArray<FName>();
}

TMap<FName, FCalliopeConnectedPin> UCalliopeNode::GetConnections() {
    return TMap<FName, FCalliopeConnectedPin>();
}

FCalliopeConnectedPin UCalliopeNode::GetConnection(const FName OutputName) const {
    return FCalliopeConnectedPin{};
}

UCalliopeAsset* UCalliopeNode::GetCalliopeAsset() const {
    return NULL;
}





void UCalliopeNode::ForceRefreshDetailView() {
}

void UCalliopeNode::ExecuteOnReconstructionRequested() {
}

void UCalliopeNode::Deactivate() {
}


bool UCalliopeNode::CheckCanPassNodeInfo(FCalliopeGuid PreviousNodeGuid) {
    return false;
}



void UCalliopeNode::BindAssetOnSubGraphReconstructionRequested(UCalliopeAsset* Asset) {
}

void UCalliopeNode::AssignInteractorGroupIDPolice(int32 InIndex, int32 InGroupIDIndex) {
}

void UCalliopeNode::AddOutputPins(TArray<FName> PinNames) {
}

void UCalliopeNode::AddInputPins(TArray<FName> PinNames) {
}

void UCalliopeNode::Activate() {
}


