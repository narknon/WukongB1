#include "PCGSpatialNoiseSettings.h"

UPCGSpatialNoiseSettings::UPCGSpatialNoiseSettings() {
    this->Mode = PCGSpatialNoiseMode::Perlin2D;
    this->EdgeMask2DMode = PCGSpatialNoiseMask2DMode::Perlin;
    this->Iterations = 4;
    this->bTiling = false;
    this->Brightness = 0.00f;
    this->Contrast = 1.00f;
    this->VoronoiCellRandomness = 1.00f;
    this->bVoronoiOrientSamplesToCellEdge = false;
    this->TiledVoronoiResolution = 8;
    this->TiledVoronoiEdgeBlendCellCount = 2;
    this->EdgeBlendDistance = 1.00f;
    this->EdgeBlendCurveOffset = 1.00f;
    this->EdgeBlendCurveIntensity = 1.00f;
}


