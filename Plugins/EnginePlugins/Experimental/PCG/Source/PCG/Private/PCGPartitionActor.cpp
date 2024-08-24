#include "PCGPartitionActor.h"

APCGPartitionActor::APCGPartitionActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PCGGridSize = 0;
    this->bUse2DGrid = false;
}

UPCGComponent* APCGPartitionActor::GetOriginalComponent(const UPCGComponent* LocalComponent) const {
    return NULL;
}

UPCGComponent* APCGPartitionActor::GetLocalComponent(const UPCGComponent* OriginalComponent) const {
    return NULL;
}


