#include "BGUSequenceBoundingBoxActor.h"
#include "Components/SceneComponent.h"

ABGUSequenceBoundingBoxActor::ABGUSequenceBoundingBoxActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<USceneComponent>(TEXT("SceneRoot"))) {
    this->SceneRoot = (USceneComponent*)RootComponent;
}


