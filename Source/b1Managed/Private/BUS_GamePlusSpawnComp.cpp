#include "BUS_GamePlusSpawnComp.h"

UBUS_GamePlusSpawnComp::UBUS_GamePlusSpawnComp(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TaskStageID = 0;
    this->TaskStageStage = TaskCollectionState::Default;
    this->CollectionCountMax = 0;
}


