#include "BUS_AudioEmitterEditComp.h"

UBUS_AudioEmitterEditComp::UBUS_AudioEmitterEditComp(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bDebug = false;
    this->bDebugLog = false;
    this->bHiddenInGame = false;
    this->bFollowPlayerElevation = false;
    this->AkEventEmitter = NULL;
    this->EmitterHeight = 0.00f;
    this->SwitchGroup = TEXT("state_dampning");
    this->OccRefreshInterval = 0.00f;
    this->MaxRangeFadeDistance = 8000.00f;
    this->WallHeight = 50.00f;
}


