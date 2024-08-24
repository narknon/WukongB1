#include "BGU_PreloadDebugActor.h"

ABGU_PreloadDebugActor::ABGU_PreloadDebugActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Enablepreload = false;
    this->EnableHitSceneItemPerformPreload = false;
    this->EnableUnitTransPreloadPreload = false;
}


