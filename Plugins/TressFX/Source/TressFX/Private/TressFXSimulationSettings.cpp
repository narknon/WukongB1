#include "TressFXSimulationSettings.h"

FTressFXSimulationSettings::FTressFXSimulationSettings() {
    this->Damping = 0.00f;
    this->GravityMagnitude = 0.00f;
    this->EnableLengthConstraint = false;
    this->LengthConstraintsIterations = 0;
    this->EnableGlobalShapeConstraint = false;
    this->GlobalConstraintStiffness = 0.00f;
    this->GlobalShapeRange = 0.00f;
    this->EnableLocalShapeConstraint = false;
    this->LocalConstraintsIterations = 0;
    this->EnableVelocityShockPropagation = false;
    this->VSPAccelThresholdMax = 0.00f;
    this->TipSeparationMultipier = 0.00f;
    this->RootSeparationMultipier = 0.00f;
    this->WindMagnitude = 0.00f;
    this->SimulationQuality = ETressFXSimulationQuality::TFXSim_Disable;
}

