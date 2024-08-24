#include "BGUBuffTriggerArea.h"
#include "BUS_BuffTriggerAreaConfigComp.h"
#include "BUS_BuffTriggerAreaDataComp.h"

ABGUBuffTriggerArea::ABGUBuffTriggerArea(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UBUS_BuffTriggerAreaDataComp>(TEXT("DataComp"))) {
    this->BuffTriggerAreaConfigComp = CreateDefaultSubobject<UBUS_BuffTriggerAreaConfigComp>(TEXT("IntervalTriggerAreaConfigComp"));
}


