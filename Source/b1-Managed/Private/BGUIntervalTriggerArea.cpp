#include "BGUIntervalTriggerArea.h"
#include "BUS_IntervalTriggerAreaConfigComp.h"
#include "BUS_IntervalTriggerAreaDataComp.h"

ABGUIntervalTriggerArea::ABGUIntervalTriggerArea(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UBUS_IntervalTriggerAreaDataComp>(TEXT("DataComp"))) {
    this->IntervalTriggerAreaConfigComp = CreateDefaultSubobject<UBUS_IntervalTriggerAreaConfigComp>(TEXT("IntervalTriggerAreaConfigComp"));
}


