#include "LayerSceneInfo.h"
#include "Components/SceneComponent.h"

ALayerSceneInfo::ALayerSceneInfo(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRootComponent"));
    this->LandscapeActor = NULL;
}

bool ALayerSceneInfo::QueryWeightInfo(const FVector& WorldPos, int32 LayerIndex, bool Nearest, float& Value) {
    return false;
}

void ALayerSceneInfo::GenerateLayeredInfo() {
}



