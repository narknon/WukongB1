#include "BED_CalliopeInteractor.h"

UBED_CalliopeInteractor::UBED_CalliopeInteractor() {
}

int32 UBED_CalliopeInteractor::GetStartNodeClasses_Implementation(TArray<UClass*>& OutClasses) const {
    return 0;
}

int32 UBED_CalliopeInteractor::GetFinishNodeClasses_Implementation(TArray<UClass*>& OutClasses) const {
    return 0;
}

int32 UBED_CalliopeInteractor::GetRerouteNodeClasses_Implementation(TArray<UClass*>& OutClasses) const {
    return 0;
}

int32 UBED_CalliopeInteractor::GetSubGraphNodeClasses_Implementation(TArray<UClass*>& OutClasses) const {
    return 0;
}

int32 UBED_CalliopeInteractor::GetCustomInputNodeClasses_Implementation(TArray<UClass*>& OutClasses) const {
    return 0;
}

int32 UBED_CalliopeInteractor::GetCustomOutputNodeClasses_Implementation(TArray<UClass*>& OutClasses) const {
    return 0;
}

bool UBED_CalliopeInteractor::SetCustomInputNodeEventName_Implementation(UCalliopeNode* Node, const FName& InEventName) {
    return false;
}

bool UBED_CalliopeInteractor::GetCustomInputNodeEventName_Implementation(UCalliopeNode* Node, FName& OutEventName) const {
    return false;
}

bool UBED_CalliopeInteractor::SetCustomOutputNodeEventName_Implementation(UCalliopeNode* Node, const FName& InEventName) {
    return false;
}

bool UBED_CalliopeInteractor::GetCustomOutputNodeEventName_Implementation(UCalliopeNode* Node, FName& OutEventName) const {
    return false;
}

int32 UBED_CalliopeInteractor::GetComponentObserverNodeClasses_Implementation(TArray<UClass*>& OutClasses) const {
    return 0;
}

int32 UBED_CalliopeInteractor::GetExecutionSequenceNodeClasses_Implementation(TArray<UClass*>& OutClasses) const {
    return 0;
}

int32 UBED_CalliopeInteractor::GetExecutionMultiGateNodeClasses_Implementation(TArray<UClass*>& OutClasses) const {
    return 0;
}


