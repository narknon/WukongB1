#include "BGUSpecifyRebirthPosArea.h"
#include "BUS_SpecifyRebirthPosAreaConfigComp.h"
#include "BUS_SpecifyRebirthPosAreaDataComp.h"

ABGUSpecifyRebirthPosArea::ABGUSpecifyRebirthPosArea(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UBUS_SpecifyRebirthPosAreaDataComp>(TEXT("DataComp"))) {
    this->ConfigComp = CreateDefaultSubobject<UBUS_SpecifyRebirthPosAreaConfigComp>(TEXT("CloudMoveTriggerAreaConfigComp"));
}


