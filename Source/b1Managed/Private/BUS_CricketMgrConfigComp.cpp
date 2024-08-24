#include "BUS_CricketMgrConfigComp.h"

UBUS_CricketMgrConfigComp::UBUS_CricketMgrConfigComp(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CricketTamer = NULL;
    this->SpawnProbability = 0.00f;
    this->TrySpawnMaxCount = 0;
    this->ReSpawnDelayTime = 0.00f;
    this->LeaveFightDistance = 0.00f;
    this->LeaveFightDelayTime = 0.00f;
    this->InteractConfig = NULL;
    this->ASWeakIdle = NULL;
    this->WeakDuration = 0.00f;
    this->NormalLongPressInteractGroupID = 0;
    this->WeakLongPressInteractGroupID = 0;
}


