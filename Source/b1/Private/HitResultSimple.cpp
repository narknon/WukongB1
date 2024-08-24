#include "HitResultSimple.h"

FHitResultSimple::FHitResultSimple() {
    this->SurfaceType = SurfaceType_Default;
    this->HitActor = NULL;
    this->bIsBlockingHit = false;
}

