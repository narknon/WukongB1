#include "CalliopeInteractor.h"

UCalliopeInteractor::UCalliopeInteractor() {
}

void UCalliopeInteractor::UnregisterInstance() {
}

bool UCalliopeInteractor::SetCustomOutputNodeEventName_Implementation(UCalliopeNode* Node, const FName& InEventName) {
    return false;
}

bool UCalliopeInteractor::SetCustomInputNodeEventName_Implementation(UCalliopeNode* Node, const FName& InEventName) {
    return false;
}

void UCalliopeInteractor::RegisterInstance(UCalliopeInteractor* Instance) {
}

int32 UCalliopeInteractor::GetSubGraphNodeClasses_Implementation(TArray<UClass*>& OutClasses) const {
    return 0;
}

int32 UCalliopeInteractor::GetStartNodeClasses_Implementation(TArray<UClass*>& OutClasses) const {
    return 0;
}

int32 UCalliopeInteractor::GetRerouteNodeClasses_Implementation(TArray<UClass*>& OutClasses) const {
    return 0;
}

UCalliopeInteractor* UCalliopeInteractor::GetInstanceChecked() {
    return NULL;
}

int32 UCalliopeInteractor::GetFinishNodeClasses_Implementation(TArray<UClass*>& OutClasses) const {
    return 0;
}

int32 UCalliopeInteractor::GetExecutionSequenceNodeClasses_Implementation(TArray<UClass*>& OutClasses) const {
    return 0;
}

int32 UCalliopeInteractor::GetExecutionMultiGateNodeClasses_Implementation(TArray<UClass*>& OutClasses) const {
    return 0;
}

bool UCalliopeInteractor::GetCustomOutputNodeEventName_Implementation(UCalliopeNode* Node, FName& OutEventName) const {
    return false;
}

int32 UCalliopeInteractor::GetCustomOutputNodeClasses_Implementation(TArray<UClass*>& OutClasses) const {
    return 0;
}

bool UCalliopeInteractor::GetCustomInputNodeEventName_Implementation(UCalliopeNode* Node, FName& OutEventName) const {
    return false;
}

int32 UCalliopeInteractor::GetCustomInputNodeClasses_Implementation(TArray<UClass*>& OutClasses) const {
    return 0;
}

int32 UCalliopeInteractor::GetComponentObserverNodeClasses_Implementation(TArray<UClass*>& OutClasses) const {
    return 0;
}

UClass* UCalliopeInteractor::GetAssetClass(ECalliopeViewType InViewType) {
    return NULL;
}

FGuid UCalliopeInteractor::ConvertCalliopeGuidToGuid(const FCalliopeGuid& InCalliopeGuid) {
    return FGuid{};
}


