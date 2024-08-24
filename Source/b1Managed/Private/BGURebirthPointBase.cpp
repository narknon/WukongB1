#include "BGURebirthPointBase.h"
#include "BUS_RebirthPointConfigComp.h"
#include "BUS_RebirthPointDataComp.h"

ABGURebirthPointBase::ABGURebirthPointBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UBUS_RebirthPointDataComp>(TEXT("RebirthPointDataComp"))) {
    this->RebirthPointConfigComp = CreateDefaultSubobject<UBUS_RebirthPointConfigComp>(TEXT("RebirthPointConfigSystem"));
}


