#include "BUS_NeutralFXAnimalSpawnConfigComp.h"

UBUS_NeutralFXAnimalSpawnConfigComp::UBUS_NeutralFXAnimalSpawnConfigComp(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Outside_Dist = 0.00f;
    this->Outside_Spd_Threshold = 0.00f;
    this->destroyTime = 0.00f;
    this->SpawnMomentType = EFXAnimalSpawnMomentType::SpawnAtEscape;
}


