#include "BUS_IntervalTriggerConfigComp.h"

UBUS_IntervalTriggerConfigComp::UBUS_IntervalTriggerConfigComp(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Timer = 0.00f;
    this->DuringTimer = 0.00f;
    this->WarningTime = 0.00f;
    this->WarningBuffID = 0;
    this->SpAddBuff = 0;
    this->AIPerceptionSetting = NULL;
    this->PostProcessMatConfig = NULL;
}


