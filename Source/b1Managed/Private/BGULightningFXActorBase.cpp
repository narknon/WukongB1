#include "BGULightningFXActorBase.h"
#include "BUS_LightningFXActorDataComp.h"
#include "BUS_LightningFXSpawnComp.h"

ABGULightningFXActorBase::ABGULightningFXActorBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UBUS_LightningFXActorDataComp>(TEXT("LightningFXActorDataComp"))) {
    this->LightningFXSpawnComp = CreateDefaultSubobject<UBUS_LightningFXSpawnComp>(TEXT("LightningFXSpawnComp"));
}


