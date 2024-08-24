#include "BGUCloudMoveTriggerArea.h"
#include "BUS_CloudMoveTriggerAreaConfigComp.h"
#include "BUS_CloudMoveTriggerAreaDataComp.h"

ABGUCloudMoveTriggerArea::ABGUCloudMoveTriggerArea(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UBUS_CloudMoveTriggerAreaDataComp>(TEXT("DataComp"))) {
    this->CloudMoveTriggerAreaConfigComp = CreateDefaultSubobject<UBUS_CloudMoveTriggerAreaConfigComp>(TEXT("CloudMoveTriggerAreaConfigComp"));
}


