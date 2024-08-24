#include "BUS_SceneWindEffectActorComp.h"

UBUS_SceneWindEffectActorComp::UBUS_SceneWindEffectActorComp(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->WindEffectStrength = 0.00f;
}

void UBUS_SceneWindEffectActorComp::BeginPlayInCS_Implementation() {
}

void UBUS_SceneWindEffectActorComp::TickComponentInCS_Implementation(float DeltaTime) {
}


