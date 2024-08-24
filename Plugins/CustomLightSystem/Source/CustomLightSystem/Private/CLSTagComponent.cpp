#include "CLSTagComponent.h"

UCLSTagComponent::UCLSTagComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ComponentTags.AddDefaulted(1);
    this->LightManagerID = 0;
    this->TargetVolume = NULL;
    this->Manager = NULL;
}

void UCLSTagComponent::InitializeManager() {
}


