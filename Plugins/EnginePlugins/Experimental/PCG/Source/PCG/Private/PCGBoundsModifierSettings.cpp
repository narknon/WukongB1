#include "PCGBoundsModifierSettings.h"

UPCGBoundsModifierSettings::UPCGBoundsModifierSettings() {
    this->Mode = EPCGBoundsModifierMode::Scale;
    this->bAffectSteepness = false;
    this->Steepness = 1.00f;
}


