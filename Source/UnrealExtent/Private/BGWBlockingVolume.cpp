#include "BGWBlockingVolume.h"

ABGWBlockingVolume::ABGWBlockingVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bNavModify = false;
    this->bMaskFillCollisionUnderneathForNavmesh = false;
}


