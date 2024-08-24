#include "BGUDeadZone.h"
#include "BUS_DeadAreaDataComp.h"

ABGUDeadZone::ABGUDeadZone(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UBUS_DeadAreaDataComp>(TEXT("DataComp"))) {
}


