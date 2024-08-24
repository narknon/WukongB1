#include "BGWMeshActor.h"
#include "Components/SceneComponent.h"

ABGWMeshActor::ABGWMeshActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
    this->OriginBlueprint = NULL;
    this->SceneRoot = (USceneComponent*)RootComponent;
}


