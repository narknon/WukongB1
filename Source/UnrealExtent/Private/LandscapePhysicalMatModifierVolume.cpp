#include "LandscapePhysicalMatModifierVolume.h"

ALandscapePhysicalMatModifierVolume::ALandscapePhysicalMatModifierVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsEditorOnlyActor = true;
    this->GenerateVolume = NULL;
    this->LandscapeActor = NULL;
}


