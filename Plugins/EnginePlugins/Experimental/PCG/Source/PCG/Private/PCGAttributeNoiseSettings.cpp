#include "PCGAttributeNoiseSettings.h"

UPCGAttributeNoiseSettings::UPCGAttributeNoiseSettings() {
    this->bUseSeed = true;
    this->Mode = EPCGAttributeNoiseMode::Set;
    this->NoiseMin = 0.00f;
    this->NoiseMax = 1.00f;
    this->bInvertSource = false;
    this->bClampResult = false;
}


