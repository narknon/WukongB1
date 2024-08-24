#include "PCGUnionData.h"

UPCGUnionData::UPCGUnionData() {
    this->FirstNonTrivialTransformData = NULL;
    this->UnionType = EPCGUnionType::LeftToRightPriority;
    this->DensityFunction = EPCGUnionDensityFunction::Maximum;
    this->CachedDimension = 0;
}

void UPCGUnionData::Initialize(const UPCGSpatialData* InA, const UPCGSpatialData* InB) {
}

void UPCGUnionData::AddData(const UPCGSpatialData* InData) {
}


