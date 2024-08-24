#include "BTTask_USharpBase.h"

UBTTask_USharpBase::UBTTask_USharpBase() {
    this->AIOwner = NULL;
    this->ActorOwner = NULL;
    this->bShowPropertyDetails = true;
}

void UBTTask_USharpBase::SetNodeNameInCS(const FString& NewNodeName) {
}



bool UBTTask_USharpBase::IsTaskExecuting() const {
    return false;
}

bool UBTTask_USharpBase::IsTaskAborting() const {
    return false;
}

void UBTTask_USharpBase::FinishExecute(bool bSuccess) {
}

void UBTTask_USharpBase::FinishAbort() {
}


