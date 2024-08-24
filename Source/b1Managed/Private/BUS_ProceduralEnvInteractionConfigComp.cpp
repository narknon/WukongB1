#include "BUS_ProceduralEnvInteractionConfigComp.h"

UBUS_ProceduralEnvInteractionConfigComp::UBUS_ProceduralEnvInteractionConfigComp(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bEnableDecal = false;
    this->bEnableMesh = false;
    this->SceneItemSurfaceType = SceneItemSurfaceType::DefaultSurface;
}


