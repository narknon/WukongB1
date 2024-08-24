#include "LandscapeHeightModifierVolume.h"

ALandscapeHeightModifierVolume::ALandscapeHeightModifierVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsEditorOnlyActor = true;
    this->GenerateVolume = NULL;
    this->LandscapeActor = NULL;
}


