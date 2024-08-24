#include "PCGDensityRemapSettings.h"

UPCGDensityRemapSettings::UPCGDensityRemapSettings() {
    this->InRangeMin = 0.00f;
    this->InRangeMax = 1.00f;
    this->OutRangeMin = 0.00f;
    this->OutRangeMax = 1.00f;
    this->bExcludeValuesOutsideInputRange = false;
}


