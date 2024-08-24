#include "BGWActorVisibilityVolume.h"

ABGWActorVisibilityVolume::ABGWActorVisibilityVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bColored = true;
    this->IsHide = false;
    this->bDisabled = false;
}


