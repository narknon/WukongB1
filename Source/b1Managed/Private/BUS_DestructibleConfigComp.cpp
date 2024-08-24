#include "BUS_DestructibleConfigComp.h"

UBUS_DestructibleConfigComp::UBUS_DestructibleConfigComp(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MassLevel = DestructibleMassLevel::Basic;
    this->StrengthLevel = DestructibleStrengthLevel::LightHitDestroy;
    this->DestroyedDebrisLifeTime = 10.00f;
    this->DebrisDissipationTime = 2.00f;
    this->DestructibleParryEvent = NULL;
    this->DestructibleParryDispConfig = NULL;
    this->DestructionDropInfoID = 0;
    this->CanBeHitByBullet = false;
}


