#include "CLSAtmosphericFog.h"
#include "Components/SkyAtmosphereComponent.h"
#include "CLSTagComponent.h"

ACLSAtmosphericFog::ACLSAtmosphericFog(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bRelevantForLevelBounds = false;
    this->RootComponent = CreateDefaultSubobject<USkyAtmosphereComponent>(TEXT("AtmosphericFogComponent0"));
    this->Tags.AddDefaulted(1);
    this->AtmosphericFogComponent = (USkyAtmosphereComponent*)RootComponent;
    this->TagComponent = CreateDefaultSubobject<UCLSTagComponent>(TEXT("TagComponent"));
}

void ACLSAtmosphericFog::SetVisibility(bool bNewVisibility) {
}


