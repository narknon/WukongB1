#include "BGUSplineTeleportActor.h"

ABGUSplineTeleportActor::ABGUSplineTeleportActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SplineActor = NULL;
    this->CircleIndex = 0;
}


