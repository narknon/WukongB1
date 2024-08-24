#include "CLSDirectionalLight.h"
#include "Components/DirectionalLightComponent.h"
#include "CLSTagComponent.h"

ACLSDirectionalLight::ACLSDirectionalLight(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bRelevantForLevelBounds = false;
    this->RootComponent = CreateDefaultSubobject<UDirectionalLightComponent>(TEXT("LightComponent0"));
    this->Tags.AddDefaulted(1);
    this->DirectionalLightComponent = (UDirectionalLightComponent*)RootComponent;
    this->TagComponent = CreateDefaultSubobject<UCLSTagComponent>(TEXT("TagComponent"));
}

void ACLSDirectionalLight::SetVisibility(bool bNewVisibility) const {
}


