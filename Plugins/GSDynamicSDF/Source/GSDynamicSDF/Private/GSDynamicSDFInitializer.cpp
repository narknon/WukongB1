#include "GSDynamicSDFInitializer.h"
#include "Components/SceneComponent.h"

AGSDynamicSDFInitializer::AGSDynamicSDFInitializer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bRelevantForLevelBounds = false;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->UsedElementCount = 0;
    this->MPC = NULL;
    this->NPC = NULL;
    this->NPCInst = NULL;
}


