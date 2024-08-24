#include "BGUOverlapArea.h"
#include "Components/SceneComponent.h"

ABGUOverlapArea::ABGUOverlapArea(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));
    this->Root = (USceneComponent*)RootComponent;
}


