#include "BUS_DropItemComp.h"

UBUS_DropItemComp::UBUS_DropItemComp(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DropItemResID = 0;
    this->UseSoulBottleCondition = false;
    this->NoSoulBottleDropTemplate = NULL;
    this->HaveSoulBottleDropTemplate = NULL;
}


