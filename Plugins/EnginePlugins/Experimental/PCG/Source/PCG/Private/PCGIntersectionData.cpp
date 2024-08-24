#include "PCGIntersectionData.h"

UPCGIntersectionData::UPCGIntersectionData() {
    this->DensityFunction = EPCGIntersectionDensityFunction::Multiply;
    this->A = NULL;
    this->B = NULL;
}

void UPCGIntersectionData::Initialize(const UPCGSpatialData* InA, const UPCGSpatialData* InB) {
}


