#include "BUS_AreaConfigInfoComp.h"

UBUS_AreaConfigInfoComp::UBUS_AreaConfigInfoComp(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AreaType = AreaType::SimpleTrigger;
    this->IngnorePlayerTrans = false;
    this->bAutoEnableOverlap = true;
    this->bNotifyGraph = false;
}


