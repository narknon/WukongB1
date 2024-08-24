#include "PCGUnionSettings.h"

UPCGUnionSettings::UPCGUnionSettings() {
    this->Type = EPCGUnionType::LeftToRightPriority;
    this->DensityFunction = EPCGUnionDensityFunction::Maximum;
}


