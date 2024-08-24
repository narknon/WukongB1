#include "BGUSceneInactiveActorBase.h"
#include "BUS_SceneInactiveActorComp.h"

ABGUSceneInactiveActorBase::ABGUSceneInactiveActorBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SceneInactiveActorComp = CreateDefaultSubobject<UBUS_SceneInactiveActorComp>(TEXT("SceneInactiveActorComp"));
}


