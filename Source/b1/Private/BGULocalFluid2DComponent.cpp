#include "BGULocalFluid2DComponent.h"

UBGULocalFluid2DComponent::UBGULocalFluid2DComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->toggleSim = true;
    this->bPostProcessCollisionData = false;
    this->blueprintDrivenParameters = true;
    this->bMovedCheck = true;
    this->blocationCheck = true;
    this->bLocalSim = true;
    this->bHighQualitySim = false;
    this->bSimAreaClamp = false;
    this->MaxIteration = 1;
    this->SimulationResX = 512;
    this->SimulationResY = 512;
    this->SimAreaSizeInCM = 4000.00f;
    this->SnappedPosParameterName = TEXT("CenterSnappedPos_WorldSpace");
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
    this->worldOffsetX = 0.00f;
    this->worldOffsetY = 0.00f;
    this->RT_CollisionResult = NULL;
    this->RT_PPCollisionResult = NULL;
    this->RT_Advection = NULL;
    this->RT_PressureDivergence = NULL;
    this->RT_Composite = NULL;
    this->RT_PressureDivergenceTemp = NULL;
    this->CollisionQueryMaterialInstance = NULL;
    this->PPCollisionQueryMaterialInstance = NULL;
    this->CompositeMaterialInstance = NULL;
    this->AdvectMaterialInstance = NULL;
    this->DivergenceMaterialInstance = NULL;
    this->PressureStep1MaterialInstance = NULL;
    this->PressureStep2MaterialInstance = NULL;
}

UTextureRenderTarget2D* UBGULocalFluid2DComponent::GetVeloDensityTexture() {
    return NULL;
}

UTextureRenderTarget2D* UBGULocalFluid2DComponent::GetPressureDivergenceTexture() {
    return NULL;
}


