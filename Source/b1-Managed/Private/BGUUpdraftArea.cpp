#include "BGUUpdraftArea.h"
#include "BUS_UpdraftAreaDataComp.h"
#include "BUS_UpdraftConfigInfoComp.h"

ABGUUpdraftArea::ABGUUpdraftArea(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UBUS_UpdraftAreaDataComp>(TEXT("DataComp"))) {
    this->UpdraftConfigInfoComp = CreateDefaultSubobject<UBUS_UpdraftConfigInfoComp>(TEXT("UpdraftConfigInfoComp"));
}


