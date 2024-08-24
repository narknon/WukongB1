#include "PCGTextureSamplerSettings.h"

UPCGTextureSamplerSettings::UPCGTextureSamplerSettings() {
    this->bUseAbsoluteTransform = false;
    this->DensityFunction = EPCGTextureDensityFunction::Multiply;
    this->ColorChannel = EPCGTextureColorChannel::Alpha;
    this->TexelSize = 50.00f;
    this->bUseAdvancedTiling = false;
    this->Rotation = 0.00f;
    this->bUseTileBounds = false;
}


