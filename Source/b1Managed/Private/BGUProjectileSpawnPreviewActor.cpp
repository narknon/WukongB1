#include "BGUProjectileSpawnPreviewActor.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"

ABGUProjectileSpawnPreviewActor::ABGUProjectileSpawnPreviewActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CharacterMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CharacterMesh"));
    this->DefaultSpawnPos = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSpawnPoint"));
    this->TargetPos = CreateDefaultSubobject<USceneComponent>(TEXT("TargetPos"));
    this->ProjectileSpawnConfig = NULL;
    this->DrawOnce = false;
    this->EnableDebugTick = false;
    this->DrawDebugLength = 1000.00f;
    this->DrawDebugDuration = 2.00f;
    this->DrawDebugTickness = 2.00f;
    this->ArrowSize = 100.00f;
    this->ProjectileSize = 50.00f;
    this->SphereSegment = 16;
    this->CharacterMesh->SetupAttachment(RootComponent);
    this->DefaultSpawnPos->SetupAttachment(RootComponent);
    this->TargetPos->SetupAttachment(RootComponent);
}

void ABGUProjectileSpawnPreviewActor::ReceiveTick_Implementation(float DeltaSeconds) {
}


