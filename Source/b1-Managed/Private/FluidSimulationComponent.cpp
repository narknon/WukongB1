#include "FluidSimulationComponent.h"

UFluidSimulationComponent::UFluidSimulationComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->VelocityTexture = NULL;
    this->AdvectedVelocityTexture = NULL;
    this->ColorTexture = NULL;
    this->DivergenceTexture = NULL;
    this->PressureTexture = NULL;
    this->ScratchRT = NULL;
    this->ObstacleTexture = NULL;
    this->AdvectMID = NULL;
    this->DivergenceMID = NULL;
    this->PressureIterationMID = NULL;
    this->GradientSubtractionMID = NULL;
    this->BoundaryConditionMID = NULL;
    this->VelocityPreviewMID = NULL;
    this->ObstacleMID = NULL;
    this->ColorPreviewMID = NULL;
    this->VelocitySeedMID = NULL;
    this->ColorSeedMID = NULL;
    this->CopyRTMID = NULL;
    this->VolumeFogMID = NULL;
    this->RaymarchVelocityMID = NULL;
    this->Settings = NULL;
    this->DefaultRes = NULL;
    this->VolumeFogComponent = NULL;
}

void UFluidSimulationComponent::AddActor(AActor* Actor) {
}

void UFluidSimulationComponent::RemoveActor(AActor* Actor) {
}

void UFluidSimulationComponent::BeginPlayInCS_Implementation() {
}

void UFluidSimulationComponent::TickComponentInCS_Implementation(float DeltaTime) {
}


