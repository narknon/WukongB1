#include "BGUProjectileBaseActor.h"

ABGUProjectileBaseActor::ABGUProjectileBaseActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ProjectileMovement = NULL;
    this->SphereCollisionComp = NULL;
    this->BoxCollisionComp = NULL;
    this->CapsuleCollisionComp = NULL;
    this->CustomCollisionComp = NULL;
    this->LineTraceStartPoint = NULL;
    this->StaticComp = NULL;
    this->Interact_Start = NULL;
    this->Interact_End = NULL;
    this->ProjectileConfigInfoComp = NULL;
}

void ABGUProjectileBaseActor::OnDead_Implementation() {
}

void ABGUProjectileBaseActor::SwitchPre_Implementation() {
}

void ABGUProjectileBaseActor::OnDrawSign_Implementation(AActor* HitActor, FTransform HitTransform) {
}

void ABGUProjectileBaseActor::SwitchBegin_Implementation() {
}

void ABGUProjectileBaseActor::SpawnFinished_Implementation(FProjectileSpawnEventInfo ProjectileSpawnEventInfo) {
}

void ABGUProjectileBaseActor::SwitchFinished_Implementation() {
}

int32 ABGUProjectileBaseActor::GetProjectileID() {
    return 0;
}

UBGUProjectileMovementComponent* ABGUProjectileBaseActor::GetProjectileMovement() {
    return NULL;
}

bool ABGUProjectileBaseActor::CheckDrawSignCondition_Implementation(AActor* HitActor) {
    return false;
}

void ABGUProjectileBaseActor::BeginPlayCS_Implementation() {
}

int32 ABGUProjectileBaseActor::GetStaticMeshCompChildsNum() {
    return 0;
}

void ABGUProjectileBaseActor::OnConstructionCS_Implementation(const FTransform& Transform) {
}

bool ABGUProjectileBaseActor::ProjectileAbilityCheck_ByBPConfig() {
    return false;
}


