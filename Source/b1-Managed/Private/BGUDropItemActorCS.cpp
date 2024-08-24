#include "BGUDropItemActorCS.h"
#include "BUS_DropItemComp.h"
#include "BUS_DropItemDataComp.h"

ABGUDropItemActorCS::ABGUDropItemActorCS(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UBUS_DropItemDataComp>(TEXT("SimpleDropItemDataComp"))) {
    this->DropItemComp = CreateDefaultSubobject<UBUS_DropItemComp>(TEXT("DropItemSystem"));
}

void ABGUDropItemActorCS::DropItemBPFunc_Implementation(float FloatParam) {
}

void ABGUDropItemActorCS::OnPlayDropEffect_Implementation() {
}


