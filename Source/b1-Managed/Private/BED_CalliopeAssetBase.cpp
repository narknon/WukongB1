#include "BED_CalliopeAssetBase.h"

UBED_CalliopeAssetBase::UBED_CalliopeAssetBase() {
}

bool UBED_CalliopeAssetBase::GetActorGuid_Implementation(AActor* InActor, FString& OutActorGuid) const {
    return false;
}

bool UBED_CalliopeAssetBase::CanManageStates_Implementation() const {
    return false;
}

TArray<UBED_QuestNode_SubGraph*> UBED_CalliopeAssetBase::GetSubGraphNodes() {
    return TArray<UBED_QuestNode_SubGraph*>();
}

bool UBED_CalliopeAssetBase::ExportDataByExtern() {
    return false;
}

int32 UBED_CalliopeAssetBase::GetActorGuidOptions_Implementation(const FString& PropertyName, TArray<FActorGuidOption>& OutOptions) const {
    return 0;
}

TArray<UBED_QuestNode_ObserveByCondition*> UBED_CalliopeAssetBase::GetObserveActorNodes() {
    return TArray<UBED_QuestNode_ObserveByCondition*>();
}

UCalliopeNode* UBED_CalliopeAssetBase::GetNode_Implementation(const FCalliopeGuid& InGuid) const {
    return NULL;
}

TMap<FCalliopeGuid, UCalliopeNode*> UBED_CalliopeAssetBase::GetNodes_Implementation() const {
    return TMap<FCalliopeGuid, UCalliopeNode*>();
}

ECalliopeViewType UBED_CalliopeAssetBase::GetViewType_Implementation() const {
    return ECalliopeViewType::None;
}

void UBED_CalliopeAssetBase::RegisterNode_Implementation(const FCalliopeGuid& NewGuid, UCalliopeNode* NewNode) {
}

bool UBED_CalliopeAssetBase::ExportToData_Implementation() {
    return false;
}

void UBED_CalliopeAssetBase::UnregisterNode_Implementation(const FCalliopeGuid& NodeGuid) {
}

void UBED_CalliopeAssetBase::OnNodeActivate_Implementation(UCalliopeNode* Node) {
}

TArray<FName> UBED_CalliopeAssetBase::GetCustomInputs_Implementation() const {
    return TArray<FName>();
}

void UBED_CalliopeAssetBase::OnNodeDeactivate_Implementation(UCalliopeNode* Node) {
}

TArray<FName> UBED_CalliopeAssetBase::GetCustomOutputs_Implementation() const {
    return TArray<FName>();
}

UClass* UBED_CalliopeAssetBase::GetStartNodeClass_Implementation() const {
    return NULL;
}

void UBED_CalliopeAssetBase::PreFinishInstance_Implementation() const {
}

void UBED_CalliopeAssetBase::PostStartInstance_Implementation() const {
}

void UBED_CalliopeAssetBase::OnPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}

void UBED_CalliopeAssetBase::PostDuplicateInCS_Implementation(bool bDuplicateForPIE) {
}

UClass* UBED_CalliopeAssetBase::GetRerouteNodeClass_Implementation() const {
    return NULL;
}

int32 UBED_CalliopeAssetBase::GetExtraDefaultInputNodes_Implementation(TArray<UClass*>& OutClasses) const {
    return 0;
}

int32 UBED_CalliopeAssetBase::GetExtraDefaultOutputNodes_Implementation(TArray<UClass*>& OutClasses) const {
    return 0;
}

UClass* UBED_CalliopeAssetBase::GetStartNodeClassInBranchGraph_Implementation() const {
    return NULL;
}

UClass* UBED_CalliopeAssetBase::GetRerouteNodeClassInBranchGraph_Implementation() const {
    return NULL;
}

int32 UBED_CalliopeAssetBase::GetExtraDefaultInputNodesInBranchGraph_Implementation(TArray<UClass*>& OutClasses) const {
    return 0;
}

int32 UBED_CalliopeAssetBase::GetExtraDefaultOutputNodesInBranchGraph_Implementation(TArray<UClass*>& OutClasses) const {
    return 0;
}


