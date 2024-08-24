#include "GSEQG_PointsOnSphere.h"

UGSEQG_PointsOnSphere::UGSEQG_PointsOnSphere() {
    this->PointNumber = 0;
    this->Radius = 0.00f;
    this->DisOrder = false;
}

void UGSEQG_PointsOnSphere::DoItemGenerationCS_Implementation(const TArray<FVector>& ContextLocations) const {
}


