#include "BGUPOMDecalActor.h"
#include "BUS_POMDecalDataComp.h"

ABGUPOMDecalActor::ABGUPOMDecalActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UBUS_POMDecalDataComp>(TEXT("POMDecalDataComp"))) {
}

void ABGUPOMDecalActor::OnConstructionCS_Implementation(const FTransform& Transform) {
}


