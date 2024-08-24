#include "BWC_DispLibEnvVolume.h"

ABWC_DispLibEnvVolume::ABWC_DispLibEnvVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Priority = 0.00f;
    this->BlendRadius = 1000.00f;
    this->BlendWeight = 1.00f;
    this->bEnabled = true;
    this->bUnbound = false;
}


