#include "GSEQG_SphericalLineTracePointGenerator.h"

UGSEQG_SphericalLineTracePointGenerator::UGSEQG_SphericalLineTracePointGenerator() {
    this->LineTraceNum = 0;
    this->LineTraceMaxLength = 0.00f;
    this->TraceTypeQuery = TraceTypeQuery1;
    this->PointMinBetween = 0.00f;
}

void UGSEQG_SphericalLineTracePointGenerator::DoItemGenerationCS_Implementation(const TArray<FVector>& ContextLocations) const {
}


