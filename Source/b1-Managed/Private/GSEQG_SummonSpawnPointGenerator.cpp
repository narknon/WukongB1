#include "GSEQG_SummonSpawnPointGenerator.h"

UGSEQG_SummonSpawnPointGenerator::UGSEQG_SummonSpawnPointGenerator() {
    this->IsRandomOPSpawn = false;
    this->IsForwardOPSpawn = false;
    this->SpawnPointNum = 0;
    this->MinFaceToBlockDis = 0.00f;
    this->IsRandomSpawnPointInHorizontal = false;
    this->IsRandomSpawnPointInVertical = false;
    this->EnableDebug = false;
    this->ForwardSpawnOuterRadius = 0.00f;
    this->ForwardSpawnInnerRadius = 0.00f;
    this->ForwardSpawnAngle = 0.00f;
    this->CircleSpawnOuterRadius = 0.00f;
    this->CircleSpawnInnerRadius = 0.00f;
}

void UGSEQG_SummonSpawnPointGenerator::DoItemGenerationCS_Implementation(const TArray<FVector>& ContextLocations) const {
}


