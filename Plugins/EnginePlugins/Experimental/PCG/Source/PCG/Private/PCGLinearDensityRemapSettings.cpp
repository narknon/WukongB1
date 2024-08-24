#include "PCGLinearDensityRemapSettings.h"

UPCGLinearDensityRemapSettings::UPCGLinearDensityRemapSettings() {
    this->bUseSeed = true;
    this->RemapMin = 0.50f;
    this->RemapMax = 1.00f;
    this->bMultiplyDensity = true;
}


