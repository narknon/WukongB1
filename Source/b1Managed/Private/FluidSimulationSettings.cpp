#include "FluidSimulationSettings.h"

UFluidSimulationSettings::UFluidSimulationSettings() {
    this->Is3D = false;
    this->Resolution2D = 1024;
    this->Resolution3D = FluidSimDimension::Vol_32_3;
    this->PressureDivisor = 0;
    this->VelocityDensityMaskAmount = 0.00f;
    this->DebugPressureStrength = 0.00f;
    this->ColorSeedMaterial = NULL;
    this->SeedTemperatureMultiplier = 1.00f;
    this->TemperatureInset = 0.50f;
    this->EdgeHardness = 1.00f;
    this->NoiseStrength = 1.00f;
    this->DensityMultiplier = 1.00f;
    this->VelocitySeedMaterial = NULL;
    this->Curl1Strength = 1.00f;
    this->Curl1Tiling = 4.00f;
    this->Curl2Strength = 1.00f;
    this->Curl2Tiling = 15.00f;
    this->OverallVelocityMultiplier = 1.00f;
    this->RadialForce = 0.00f;
    this->ObstacleMaterial2D = NULL;
    this->AdvectionMaterial3D = NULL;
    this->JacobiIterations = 20;
    this->TimeStep = 1.00f;
    this->ConstantCurlTiling = 1.00f;
    this->ConstantCurlStrength = 0.00f;
    this->TemperatureBuoyancy = 1.00f;
    this->TemperatureDampening = 0.00f;
    this->DensityDampening = 0.00f;
    this->DensityErosion = 0.00f;
    this->EmissionCurve = NULL;
    this->EmissionMultiplier = 0.00f;
    this->EmissionTemperatureMultiplier = 0.00f;
    this->InteractInfo = NULL;
    this->InteractVelocityMultiper = 0.00f;
}


