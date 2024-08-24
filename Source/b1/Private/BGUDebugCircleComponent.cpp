#include "BGUDebugCircleComponent.h"

UBGUDebugCircleComponent::UBGUDebugCircleComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bUseEditorCompositing = true;
    this->CircleRadius = 32.00f;
    this->CircleThickness = 5.00f;
}

void UBGUDebugCircleComponent::SetCircleRadius(float InCircleRadius) {
}

float UBGUDebugCircleComponent::GetUnscaledCircleRadius() const {
    return 0.0f;
}

float UBGUDebugCircleComponent::GetShapeScale() const {
    return 0.0f;
}

float UBGUDebugCircleComponent::GetScaledCircleRadius() const {
    return 0.0f;
}


