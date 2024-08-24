#include "CustomVariableComponent.h"

UCustomVariableComponent::UCustomVariableComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->WaterReflectionMode = EWaterReflectionMode::ReflectionSphere;
    this->GIIntensityScale = 1.00f;
    this->GISpecularFactor = 1.00f;
    this->GIShadowIntensityScale = 0.00f;
    this->ReflectionDiffuseBoost = 1.00f;
    this->GISkyLightIntensity = 1.00f;
    this->GISkyLightIndirectIntensity = 1.00f;
    this->SkylightIntensityMultiplier = 1.00f;
    this->HZBTraversalRelativeDepthThickness = 0.05f;
    this->LumenHZBTraversalOverride = -1;
}


