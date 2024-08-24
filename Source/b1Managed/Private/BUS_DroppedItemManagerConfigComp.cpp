#include "BUS_DroppedItemManagerConfigComp.h"

UBUS_DroppedItemManagerConfigComp::UBUS_DroppedItemManagerConfigComp(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DropItemID = 0;
    this->SpawnDelayTime = 0.00f;
    this->bUseSocketRotation = false;
    this->bUseSocketRotationAxisX = false;
    this->bUseSocketRotationAxisY = false;
    this->bUseSocketRotationAxisZ = false;
}


