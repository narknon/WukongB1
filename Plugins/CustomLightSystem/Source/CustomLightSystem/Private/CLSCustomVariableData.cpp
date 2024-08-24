#include "CLSCustomVariableData.h"

FCLSCustomVariableData::FCLSCustomVariableData() {
    this->bValid = false;
    this->WaterReflectionMode = EWaterReflectionMode::None;
    this->GIIntensityScale = 0.00f;
    this->GISpecularFactor = 0.00f;
    this->GIShadowIntensityScale = 0.00f;
    this->ReflectionDiffuseBoost = 0.00f;
    this->GISkyLightIntensity = 0.00f;
    this->GISkyLightIndirectIntensity = 0.00f;
    this->SkylightIntensityMultiplier = 0.00f;
    this->HZBTraversalRelativeDepthThickness = 0.00f;
    this->LumenHZBTraversalOverride = 0.00f;
}

