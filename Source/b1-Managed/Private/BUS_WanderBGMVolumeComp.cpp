#include "BUS_WanderBGMVolumeComp.h"

UBUS_WanderBGMVolumeComp::UBUS_WanderBGMVolumeComp(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AkEventBegin = NULL;
    this->AkEventStop = NULL;
    this->VolumeBGMConfigDA = NULL;
}


