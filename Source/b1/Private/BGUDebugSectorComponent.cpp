#include "BGUDebugSectorComponent.h"

UBGUDebugSectorComponent::UBGUDebugSectorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bUseEditorCompositing = true;
    this->SectorRadius = 32.00f;
    this->SectorMinAngle = -45.00f;
    this->SectorMaxAngle = 45.00f;
    this->SectorThickness = 5.00f;
}

void UBGUDebugSectorComponent::SetSectorRadius(float InSectorRadius) {
}

void UBGUDebugSectorComponent::SetSectorMinAngle(float InMinAngle) {
}

void UBGUDebugSectorComponent::SetSectorMaxAngle(float InMaxAngle) {
}

float UBGUDebugSectorComponent::GetUnscaledSectorRadius() const {
    return 0.0f;
}

float UBGUDebugSectorComponent::GetShapeScale() const {
    return 0.0f;
}

float UBGUDebugSectorComponent::GetScaledSectorRadius() const {
    return 0.0f;
}


