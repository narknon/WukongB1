#include "BUS_IntervalTriggerAreaConfigComp.h"

UBUS_IntervalTriggerAreaConfigComp::UBUS_IntervalTriggerAreaConfigComp(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AutoEnable = false;
    this->TriggerInterval = 0.00f;
    this->DuringTime = 0.00f;
    this->AIPerceptionSetting = NULL;
    this->PostProcessMatConfig = NULL;
    this->AkEventBegin = NULL;
    this->AkEventStop = NULL;
    this->VolumeBGMConfigDA = NULL;
}


