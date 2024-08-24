#include "PCGDifferenceData.h"

UPCGDifferenceData::UPCGDifferenceData() {
    this->bDiffMetadata = true;
    this->Source = NULL;
    this->Difference = NULL;
    this->DifferencesUnion = NULL;
    this->DensityFunction = EPCGDifferenceDensityFunction::Minimum;
}

void UPCGDifferenceData::SetDensityFunction(EPCGDifferenceDensityFunction InDensityFunction) {
}

void UPCGDifferenceData::Initialize(const UPCGSpatialData* InData) {
}

void UPCGDifferenceData::AddDifference(const UPCGSpatialData* InDifference) {
}


