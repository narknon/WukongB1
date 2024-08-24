#include "BTService_USharpBase.h"

UBTService_USharpBase::UBTService_USharpBase() {
    this->AIOwner = NULL;
    this->ActorOwner = NULL;
    this->bShowPropertyDetails = true;
    this->bShowEventDetails = false;
}

void UBTService_USharpBase::SetNodeNameInCS(const FString& NewNodeName) {
}



bool UBTService_USharpBase::IsServiceActive() const {
    return false;
}


