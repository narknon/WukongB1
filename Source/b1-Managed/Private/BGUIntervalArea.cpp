#include "BGUIntervalArea.h"
#include "BUS_BGMAreaDataComp.h"
#include "BUS_IntervalTriggerConfigComp.h"
#include "BUS_WanderBGMAreaConfigComp.h"

ABGUIntervalArea::ABGUIntervalArea(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UBUS_BGMAreaDataComp>(TEXT("BGMAreaDataComp"))) {
    this->WanderBGMAreaConfigComp = CreateDefaultSubobject<UBUS_WanderBGMAreaConfigComp>(TEXT("WanderBGMAreaConfigComp"));
    this->IntervalTriggerConfigComp = CreateDefaultSubobject<UBUS_IntervalTriggerConfigComp>(TEXT("IntervalTriggerConfigComp"));
}


