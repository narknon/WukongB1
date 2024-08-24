#include "ArteriesActor.h"
#include "Components/SceneComponent.h"

AArteriesActor::AArteriesActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->FinalObject = NULL;
}

void AArteriesActor::WaitForCount(FName GroupName, int32 Count, float Timeout) {
}


void AArteriesActor::Increment(FName GroupName) {
}

void AArteriesActor::Build(bool bForceRebuild) {
}


