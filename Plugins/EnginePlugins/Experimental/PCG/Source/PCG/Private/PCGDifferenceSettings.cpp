#include "PCGDifferenceSettings.h"

UPCGDifferenceSettings::UPCGDifferenceSettings() {
    this->DensityFunction = EPCGDifferenceDensityFunction::Minimum;
    this->Mode = EPCGDifferenceMode::Inferred;
    this->bDiffMetadata = true;
}


