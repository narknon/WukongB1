#include "PCGDistanceSettings.h"

UPCGDistanceSettings::UPCGDistanceSettings() {
    this->AttributeName = TEXT("Distance");
    this->bOutputDistanceVector = false;
    this->bSetDensity = false;
    this->MaximumDistance = 20000.00f;
    this->SourceShape = PCGDistanceShape::SphereBounds;
    this->TargetShape = PCGDistanceShape::SphereBounds;
}


