#include "GSEQG_CircleAroundProjectile.h"

UGSEQG_CircleAroundProjectile::UGSEQG_CircleAroundProjectile() {
    this->ProjectileID = 0;
    this->PointNumber = 0;
    this->CircleRadius = 0.00f;
    this->ZOffset = 0.00f;
}

void UGSEQG_CircleAroundProjectile::DoItemGenerationCS_Implementation(const TArray<FVector>& ContextLocations) const {
}


