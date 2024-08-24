#include "BUS_NeutralAnimalAreaConfigInfoComp.h"

UBUS_NeutralAnimalAreaConfigInfoComp::UBUS_NeutralAnimalAreaConfigInfoComp(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bDrawDebug = false;
    this->DestroyAllAnimalWhenPlaySeq = true;
    this->DontSpawnInCloudMove = false;
    this->DistributionSpawnTendency = AnimalDistributionSpawnTendency::Concentrated;
    this->PresetCD = 0.00f;
    this->SpawnCD = 0.00f;
    this->DestroyProtectCD = 0.00f;
    this->SpawnPosType = AnimalSpawnPosType::EQS_Runtime;
    this->EQSTemplate = NULL;
    this->SpawnRotType = AnimalSpawnRotType::RandomYaw;
}


