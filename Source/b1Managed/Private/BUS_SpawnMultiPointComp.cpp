#include "BUS_SpawnMultiPointComp.h"

UBUS_SpawnMultiPointComp::UBUS_SpawnMultiPointComp(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bDefaultStartSpawn = false;
    this->GeneratePointsEQSTemplate = NULL;
    this->PreviewMesh = NULL;
    this->Material = NULL;
    this->UseSpawnPointsRot = false;
    this->SpawnNum = 0;
    this->ReSpawnThreshold = 0;
    this->IsLRU = false;
    this->IsNotSpawnedInPlayerSight = false;
    this->LowerLimitNum = 0;
    this->ReSpawnNum = 0;
    this->ReSpawnTestInterval = 0.00f;
    this->Type = SpawnType::Weapon;
    this->SpawnRule = SpawnRule::Random;
    this->SpawnHeight = 100.00f;
    this->bIsFacePlayer = false;
    this->bIsCatchPlayer = false;
}

void UBUS_SpawnMultiPointComp::RunEQSQuery() {
}

void UBUS_SpawnMultiPointComp::RecordSpawnPoints() {
}

void UBUS_SpawnMultiPointComp::ClearGenerateActors() {
}

void UBUS_SpawnMultiPointComp::PreviewRecordSpawnPoints() {
}


