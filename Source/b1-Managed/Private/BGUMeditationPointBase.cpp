#include "BGUMeditationPointBase.h"
#include "BUS_MeditationPointConfigComp.h"
#include "BUS_MeditationPointDataComp.h"

ABGUMeditationPointBase::ABGUMeditationPointBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UBUS_MeditationPointDataComp>(TEXT("MeditationPointDataComp"))) {
    this->MeditationPointConfigComp = CreateDefaultSubobject<UBUS_MeditationPointConfigComp>(TEXT("MeditationPointConfigSystem"));
}

void ABGUMeditationPointBase::ReceiveBeginPlay_Implementation() {
}


