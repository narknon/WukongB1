#include "PCGSurfaceSamplerSettings.h"

UPCGSurfaceSamplerSettings::UPCGSurfaceSamplerSettings() {
    this->bUseSeed = true;
    this->PointsPerSquaredMeter = 0.10f;
    this->Looseness = 1.00f;
    this->bUnbounded = false;
    this->bApplyDensityToPoints = true;
    this->PointSteepness = 0.50f;
}


