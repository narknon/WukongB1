#include "BGUEnvironmentItemStateMachineActorBase.h"

ABGUEnvironmentItemStateMachineActorBase::ABGUEnvironmentItemStateMachineActorBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void ABGUEnvironmentItemStateMachineActorBase::OnGSReset_Implementation() {
}

void ABGUEnvironmentItemStateMachineActorBase::OnEnableOverlap_Implementation() {
}

void ABGUEnvironmentItemStateMachineActorBase::OnDisableOverlap_Implementation() {
}

void ABGUEnvironmentItemStateMachineActorBase::OnCollisionEndOverlap_Implementation(AActor* OtherActor) {
}

void ABGUEnvironmentItemStateMachineActorBase::OnResetToOverlapEnable_Implementation() {
}

void ABGUEnvironmentItemStateMachineActorBase::OnResetToOverlapDisable_Implementation() {
}

void ABGUEnvironmentItemStateMachineActorBase::OnCollisionBeginOverlap_Implementation(AActor* OtherActor) {
}

int32 ABGUEnvironmentItemStateMachineActorBase::PlayAkEventWithDialogue(UAkComponent* AkComp, UAkAudioEvent* AkEvent) {
    return 0;
}


