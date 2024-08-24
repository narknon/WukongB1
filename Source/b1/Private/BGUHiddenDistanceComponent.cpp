#include "BGUHiddenDistanceComponent.h"

UBGUHiddenDistanceComponent::UBGUHiddenDistanceComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SupportComponents.AddDefaulted(1);
    this->FadeOutDistance = 10000.00f;
    this->bFadeOut = false;
}


