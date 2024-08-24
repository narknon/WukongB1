#include "FluidSimulationRes.h"

UFluidSimulationRes::UFluidSimulationRes() {
    this->AdvectionMaterial = NULL;
    this->DivergenceMaterial = NULL;
    this->PressureIterationMaterial = NULL;
    this->GradientSubtractionMaterial = NULL;
    this->BoundaryConditionMaterial = NULL;
    this->ObstacleMaterial = NULL;
    this->ColorPreviewMaterial = NULL;
    this->VelocityPreviewMaterial = NULL;
    this->VolumePreviewMaterial = NULL;
    this->VelocitySeedMaterial = NULL;
    this->CopyRTMaterial = NULL;
    this->RaymarchVelocityMaterial = NULL;
    this->InteractiveVolumeFogMaterial = NULL;
}


