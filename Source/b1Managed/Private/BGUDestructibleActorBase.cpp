#include "BGUDestructibleActorBase.h"

ABGUDestructibleActorBase::ABGUDestructibleActorBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootScaleFactor = 0.00f;
}

void ABGUDestructibleActorBase::DisableCollision() {
}

void ABGUDestructibleActorBase::InitDestructedEffect_Implementation() {
}

void ABGUDestructibleActorBase::PlayDestructedEffect_Implementation(float SinkDelay, float SinkVelocity, AActor* AtkActor) {
}

void ABGUDestructibleActorBase::ResetDestructedEffect_Implementation() {
}

void ABGUDestructibleActorBase::ReceiveTick_Implementation(float DeltaSeconds) {
}


