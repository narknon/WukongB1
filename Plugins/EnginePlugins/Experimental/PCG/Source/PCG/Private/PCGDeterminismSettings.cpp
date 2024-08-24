#include "PCGDeterminismSettings.h"

FPCGDeterminismSettings::FPCGDeterminismSettings() {
    this->bNativeTests = false;
    this->bUseBlueprintDeterminismTest = false;
    this->DeterminismTestBlueprint = NULL;
}

