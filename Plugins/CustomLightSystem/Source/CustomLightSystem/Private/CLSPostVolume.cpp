#include "CLSPostVolume.h"

ACLSPostVolume::ACLSPostVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->PostProcessPriority = 0.00f;
    this->PostProcessBlendRadius = 100.00f;
    this->PostProcessBlendWeight = 1.00f;
    this->bPostProcessEnabled = false;
}

void ACLSPostVolume::AddOrUpdateBlendable(TScriptInterface<IBlendableInterface> InBlendableObject, float InWeight) {
}


