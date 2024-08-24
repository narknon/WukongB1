#include "GSEQG_SyncAnimationGuestPointGenerator.h"

UGSEQG_SyncAnimationGuestPointGenerator::UGSEQG_SyncAnimationGuestPointGenerator() {
    this->StartSyncGuestDistance = 1000.00f;
    this->BeforeSyncGuestMoveDistance = 1000.00f;
    this->CirclePointsCount = 36;
    this->AngleCostWeight = 1.00f;
    this->DistanceCostWeight = 1.00f;
    this->bDrawDebug = false;
}

void UGSEQG_SyncAnimationGuestPointGenerator::DoItemGenerationCS_Implementation(const TArray<FVector>& ContextLocations) const {
}


