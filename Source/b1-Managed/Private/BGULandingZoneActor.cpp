#include "BGULandingZoneActor.h"
#include "BUS_LandingZoneDataComp.h"

ABGULandingZoneActor::ABGULandingZoneActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UBUS_LandingZoneDataComp>(TEXT("LandingZoneDataComp"))) {
}


