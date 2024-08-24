#include "PCGMatchAndSetBase.h"

UPCGMatchAndSetBase::UPCGMatchAndSetBase() {
    this->Type = EPCGMetadataTypes::Double;
    this->StringMode = EPCGMetadataTypesConstantStructStringMode::String;
}

bool UPCGMatchAndSetBase::ValidatePreconditions_Implementation(const UPCGPointData* InPointData) const {
    return false;
}

void UPCGMatchAndSetBase::MatchAndSet_Implementation(FPCGContext& Context, const UPCGPointMatchAndSetSettings* InSettings, const UPCGPointData* InPointData, UPCGPointData* OutPointData) const {
}


