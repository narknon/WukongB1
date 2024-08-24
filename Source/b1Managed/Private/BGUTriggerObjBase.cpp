#include "BGUTriggerObjBase.h"
#include "BUS_TriggerComp.h"
#include "BUS_TriggerObjDataComp.h"

ABGUTriggerObjBase::ABGUTriggerObjBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UBUS_TriggerObjDataComp>(TEXT("TriggerObjDataComp"))) {
    this->TriggerComp = CreateDefaultSubobject<UBUS_TriggerComp>(TEXT("TriggerSystem"));
}

void ABGUTriggerObjBase::OnConstructionCS_Implementation(const FTransform& Transform) {
}


