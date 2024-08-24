#include "CalliopeLevelSequenceActor.h"
#include "CalliopeLevelSequencePlayer.h"

ACalliopeLevelSequenceActor::ACalliopeLevelSequenceActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UCalliopeLevelSequencePlayer>(TEXT("AnimationPlayer"))) {
    this->DurationTime = 0.00f;
}

void ACalliopeLevelSequenceActor::SetPaused(bool bInPaused) {
}

void ACalliopeLevelSequenceActor::SetAllPerformerTickEnabled(bool bEnable, TSet<AActor*>& OutPerformers) {
}

void ACalliopeLevelSequenceActor::SetAllMeshPropertyInSequence(bool bEnable) {
}

void ACalliopeLevelSequenceActor::ReSetSequence(ULevelSequence* InSequence) {
}

void ACalliopeLevelSequenceActor::MeshSetClothLocalSpaceSimulation(UMeshComponent* Mesh, bool bEnable) {
}

void ACalliopeLevelSequenceActor::MeshPrestreamTextures(UMeshComponent* Mesh, float DurationTimeSeconds, bool bEnable) {
}

void ACalliopeLevelSequenceActor::LocateBoundActors() {
}

int32 ACalliopeLevelSequenceActor::GetBindingTags(TSet<FName>& OutBindingTags) const {
    return 0;
}

void ACalliopeLevelSequenceActor::BindActorsByTag(const TMap<FName, AActor*>& TagActors) {
}

void ACalliopeLevelSequenceActor::BindActorByName(const FName& BindingName, AActor* BindingActor) {
}


