#include "BGUForceOriginalFormTriggerArea.h"
#include "BUS_ForceOriginalFormAreaConfigComp.h"
#include "BUS_ForceOriginalFormAreaDataComp.h"

ABGUForceOriginalFormTriggerArea::ABGUForceOriginalFormTriggerArea(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UBUS_ForceOriginalFormAreaDataComp>(TEXT("DataComp"))) {
    this->ForceOriginalFormAreaConfigComp = CreateDefaultSubobject<UBUS_ForceOriginalFormAreaConfigComp>(TEXT("ForceOriginalFormAreaConfigComp"));
}


