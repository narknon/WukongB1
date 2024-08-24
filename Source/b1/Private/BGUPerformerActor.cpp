#include "BGUPerformerActor.h"
#include "Components/CapsuleComponent.h"
#include "Components/SkeletalMeshComponent.h"

ABGUPerformerActor::ABGUPerformerActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CollisionCylinder"));
    this->Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CharacterMesh0"));
    this->CapsuleComponent = (UCapsuleComponent*)RootComponent;
    this->Mesh->SetupAttachment(RootComponent);
}

void ABGUPerformerActor::SetOptimizeEnabled(bool bEnable) {
}


