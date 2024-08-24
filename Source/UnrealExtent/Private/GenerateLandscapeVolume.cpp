#include "GenerateLandscapeVolume.h"

AGenerateLandscapeVolume::AGenerateLandscapeVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsEditorOnlyActor = true;
    this->LandscapeHeightLiftUp = 0.00f;
    this->ResolutionPerComponent = 63;
    this->LandscapeMaterial = NULL;
    this->LandscapeHoleMaterial = NULL;
    this->StaticMeshToPMGrassList = NULL;
    this->IgnoreActorTags.AddDefaulted(2);
    this->MaxDeltaZ = 0.00f;
    this->LandscapeActor = NULL;
}


