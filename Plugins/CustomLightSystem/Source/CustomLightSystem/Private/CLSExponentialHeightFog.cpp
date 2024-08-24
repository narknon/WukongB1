#include "CLSExponentialHeightFog.h"
#include "Components/ExponentialHeightFogComponent.h"
#include "CLSTagComponent.h"

ACLSExponentialHeightFog::ACLSExponentialHeightFog(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bRelevantForLevelBounds = false;
    this->RootComponent = CreateDefaultSubobject<UExponentialHeightFogComponent>(TEXT("HeightFogComponent0"));
    this->Tags.AddDefaulted(1);
    this->ExponentialHeightFogComponent = (UExponentialHeightFogComponent*)RootComponent;
    this->TagComponent = CreateDefaultSubobject<UCLSTagComponent>(TEXT("TagComponent"));
}

void ACLSExponentialHeightFog::SetVisibility(bool bNewVisibility) const {
}


