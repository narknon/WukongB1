#include "BGWDataAsset_LocalFluid2DConfig.h"

UBGWDataAsset_LocalFluid2DConfig::UBGWDataAsset_LocalFluid2DConfig() {
    this->toggleSim = false;
    this->bPostProcessCollisionData = false;
    this->blueprintDrivenParameters = false;
    this->bMovedCheck = false;
    this->blocationCheck = false;
    this->bLocalSim = false;
    this->bHighQualitySim = false;
    this->bSimAreaClamp = false;
    this->MaxIteration = 0;
    this->SimulationResX = 0;
    this->SimulationResY = 0;
    this->SimAreaSizeInCM = 0.00f;
    this->dynamicSDFMpc = NULL;
    this->worldOffsetThreshold = 0.00f;
    this->moveThreadhold = 0.00f;
    this->edgeExtendSize = 0.00f;
    this->bExportVeloDensity = false;
    this->bExportPressureDivergence = false;
    this->veloDensityOutput = NULL;
    this->pressureDivergenceOutput = NULL;
    this->CollisionQueryMaterial = NULL;
    this->PPCollisionQueryMaterial = NULL;
    this->CompositeMaterial = NULL;
    this->AdvectMaterial = NULL;
    this->DivergenceMaterial = NULL;
    this->PressureStep1Material = NULL;
    this->PressureStep2Material = NULL;
    this->BrushPuncture = 0.00f;
    this->VeloDirNoise = 0.00f;
    this->Speed = 0.00f;
    this->VeloFromSimAreaMotion = 0.00f;
    this->SimEdgeBouncyness = 0.00f;
    this->FadeDensityAtSimEdge = 0.00f;
    this->VeloDirNoiseSize = 0.00f;
    this->VeloDirNoiseSpeed = 0.00f;
    this->VeloOffsetX = 0.00f;
    this->VeloOffsetY = 0.00f;
    this->VeloFromBrushMotion = 0.00f;
    this->VeloStrength = 0.00f;
    this->VeloRotate = 0.00f;
    this->VeloAmpNoise = 0.00f;
    this->InputFeedback = 0.00f;
    this->FlowFeedback = 0.00f;
    this->Divergence = 0.00f;
    this->BrushSize = 0.00f;
    this->BrushStrength = 0.00f;
    this->EraserMode = 0.00f;
    this->BrushHardness = 0.00f;
    this->DensityTemplate = NULL;
    this->VelocityTemplate = NULL;
    this->VelocityOffsetSpeed = 0.00f;
    this->EdgeMaskWidth = 0.00f;
    this->DensityTxtMult = 0.00f;
    this->DensityTxtScale = 0.00f;
    this->DensityTxtOffsetX = 0.00f;
    this->DensityTxtOffsetY = 0.00f;
    this->BrushNoise = 0.00f;
    this->VeloInputTile = 0.00f;
    this->DensityInputNoiseAmp = 0.00f;
    this->DensityInputNoiseOffset = 0.00f;
    this->DensityInputNoiseTile = 0.00f;
    this->BrushRnd = 0.00f;
}


