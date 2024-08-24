#include "PCGDebugVisualizationSettings.h"

FPCGDebugVisualizationSettings::FPCGDebugVisualizationSettings() {
    this->PointScale = 0.00f;
    this->ScaleMethod = EPCGDebugVisScaleMethod::Relative;
    this->bCheckForDuplicates = false;
}

