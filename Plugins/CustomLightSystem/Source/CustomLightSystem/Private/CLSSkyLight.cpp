#include "CLSSkyLight.h"
#include "Components/SkyLightComponent.h"
#include "CLSTagComponent.h"

ACLSSkyLight::ACLSSkyLight(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bRelevantForLevelBounds = false;
    this->RootComponent = CreateDefaultSubobject<USkyLightComponent>(TEXT("SkyLightComponent0"));
    this->Tags.AddDefaulted(1);
    this->SkyLightComponent = (USkyLightComponent*)RootComponent;
    this->TagComponent = CreateDefaultSubobject<UCLSTagComponent>(TEXT("TagComponent"));
}

void ACLSSkyLight::SetVisibility(bool bNewVisibility) const {
}


