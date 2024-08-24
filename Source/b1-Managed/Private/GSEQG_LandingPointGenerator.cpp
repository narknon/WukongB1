#include "GSEQG_LandingPointGenerator.h"

UGSEQG_LandingPointGenerator::UGSEQG_LandingPointGenerator() {
    this->ExtentX = 0.00f;
    this->ExtentY = 0.00f;
    this->SpawnPointNumPerXDir = 0;
    this->SpawnPointNumPerYDir = 0;
}

void UGSEQG_LandingPointGenerator::DoItemGenerationCS_Implementation(const TArray<FVector>& ContextLocations) const {
}


