#include "BGWGSStreamingSourceActor.h"
#include "Components/SceneComponent.h"

ABGWGSStreamingSourceActor::ABGWGSStreamingSourceActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
}


