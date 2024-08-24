#include "PCGInstanceDataPackerBase.h"

UPCGInstanceDataPackerBase::UPCGInstanceDataPackerBase() {
}

void UPCGInstanceDataPackerBase::PackInstances_Implementation(FPCGContext& Context, const UPCGSpatialData* InSpatialData, const FPCGMeshInstanceList& InstanceList, FPCGPackedCustomData& OutPackedCustomData) const {
}

void UPCGInstanceDataPackerBase::PackCustomDataFromAttributes(const FPCGMeshInstanceList& InstanceList, const UPCGMetadata* MetaData, const TArray<FName>& AttributeNames, FPCGPackedCustomData& OutPackedCustomData) const {
}

bool UPCGInstanceDataPackerBase::AddTypeToPacking(int32 TypeId, FPCGPackedCustomData& OutPackedCustomData) const {
    return false;
}


