#include "BUS_BuffTriggerConfigComp.h"

UBUS_BuffTriggerConfigComp::UBUS_BuffTriggerConfigComp(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AutoEnable = true;
    this->bTriggerEndOverlapWhenDisable = false;
}


