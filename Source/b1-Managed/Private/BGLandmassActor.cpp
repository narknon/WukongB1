#include "BGLandmassActor.h"

ABGLandmassActor::ABGLandmassActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->WeightmapRT = NULL;
    this->HeightmapRT = NULL;
    this->LandscapeMPC = NULL;
}


