#include "BUS_SceneInactiveActorComp.h"

UBUS_SceneInactiveActorComp::UBUS_SceneInactiveActorComp(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UBUS_SceneInactiveActorComp::TryAddActivationInfo(FFGSSceneActorActivationInfo ActivationInfo) {
}

void UBUS_SceneInactiveActorComp::TryRemoveActivationInfo(EGSSceneActorActivationType SceneActorActivationType, FName Tag) {
}

void UBUS_SceneInactiveActorComp::EndPlayInCS_Implementation(EEndPlayReason::Type EndPlayReason) {
}

TArray<FFGSSceneActorActivationInfo> UBUS_SceneInactiveActorComp::GetSceneActorActivationInfo() {
    return TArray<FFGSSceneActorActivationInfo>();
}

void UBUS_SceneInactiveActorComp::BeginPlayInCS_Implementation() {
}

void UBUS_SceneInactiveActorComp::TickComponentInCS_Implementation(float DeltaTime) {
}


