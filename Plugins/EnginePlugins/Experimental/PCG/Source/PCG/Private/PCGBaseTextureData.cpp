#include "PCGBaseTextureData.h"

UPCGBaseTextureData::UPCGBaseTextureData() {
    this->DensityFunction = EPCGTextureDensityFunction::Multiply;
    this->ColorChannel = EPCGTextureColorChannel::Alpha;
    this->TexelSize = 50.00f;
    this->bUseAdvancedTiling = false;
    this->Rotation = 0.00f;
    this->bUseTileBounds = false;
    this->Height = 0;
    this->Width = 0;
}


