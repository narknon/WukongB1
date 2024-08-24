#include "CalliopeAsset.h"

UCalliopeAsset::UCalliopeAsset() {
    this->BranchGraphSchema = NULL;
    this->SearchNodeIndex = 0;
    this->TemplateAsset = NULL;
}

void UCalliopeAsset::UpdateParameterActorReferenceAndAliasName(const FString& ObjectPath, const FString& ActorGuid, const FName& AliasName) {
}


void UCalliopeAsset::StartInstance() {
}

void UCalliopeAsset::StartAsSubInstance(UCalliopeAsset* ParentInstance, const FCalliopeGuid& InSubNodeGuid) {
}

void UCalliopeAsset::SetSubGraphAssetInPIE(const FCalliopeGuid& InGuid, UCalliopeAsset* CalliopeAsset) {
}

void UCalliopeAsset::RemoveBranchGraph(const FName& GraphName) {
}


void UCalliopeAsset::RecordOutput(const FCalliopeGuid& InGuid, const FName& InPinName) {
}

void UCalliopeAsset::RecordOnlyNode(const FCalliopeGuid& InGuid) {
}

void UCalliopeAsset::RecordInput(const FCalliopeGuid& InGuid, const FName& InPinName) {
}










void UCalliopeAsset::HarvestNodeConnections() {
}






bool UCalliopeAsset::GetParameterTaskStateIDByConfigGuid(const FCalliopeGuid& InConfigGuid, int32& OutTaskStageID) {
    return false;
}

bool UCalliopeAsset::GetParameterSequenceIDByConfigGuid(const FCalliopeGuid& InConfigGuid, int32& OutSequenceID) {
    return false;
}

bool UCalliopeAsset::GetParameterDisplayNameByConfigGuid(const FCalliopeGuid& InConfigGuid, const FString& InPropertyName, FString& OutDisplayName) {
    return false;
}

bool UCalliopeAsset::GetParameterConfigGuidByActorGuid(const EGsManagedParamType& ParamType, const FString& ParamValueString, const int32 ParamValueInt, const FName& ParamValueName, FCalliopeGuid& OutGuid) {
    return false;
}

bool UCalliopeAsset::GetParameterBuffIDByConfigGuid(const FCalliopeGuid& InConfigGuid, int32& OutBuffID) {
    return false;
}

bool UCalliopeAsset::GetParameterActorGuidByConfigGuid(const FCalliopeGuid& InConfigGuid, FString& OutActorGuid) {
    return false;
}









void UCalliopeAsset::FinishInstance() {
}


void UCalliopeAsset::ExecuteSubGraphReconstructionRequested() {
}

void UCalliopeAsset::DeactivateNode(const FCalliopeGuid& InGuid) {
}

UCalliopeAsset* UCalliopeAsset::CreateInstance(UObject* Owner, UCalliopeAsset* CalliopeAsset, const FString& InstancePrefixName) {
    return NULL;
}

void UCalliopeAsset::ClearRecordData() {
}

void UCalliopeAsset::ClearParameters() {
}

void UCalliopeAsset::ClearInvalidBranchGraph() {
}

void UCalliopeAsset::BroadcastRegenerateToolbars() const {
}

void UCalliopeAsset::AssignParameterUnitTamerReference(const FCalliopeGuid& InConfigGuid, const FString& ObjectPath) {
}

bool UCalliopeAsset::AddParameter(const EGsManagedParamType& ParamType, const FString& ObjectPath, const FString& ActorGuid, const FName& AliasName, int32 State, FCalliopeGuid& OutConfigGuid) {
    return false;
}

void UCalliopeAsset::AddBranchGraph(const FName& GraphName) {
}


