#include "SplineWidget.h"

USplineWidget::USplineWidget() {
}

void USplineWidget::UpdateSpline() {
}

void USplineWidget::SetSplineType(EUMGSplineType Type) {
}

void USplineWidget::SetSplineThickness(float Thickness) {
}

void USplineWidget::SetSplineMaterial(UMaterialInterface* Material) {
}

void USplineWidget::RemoveSplinePoint(int32 Index, bool bUpdateSpline) {
}

void USplineWidget::RemoveAllSplinePoint(bool bUpdateSpline) {
}

FVector2D USplineWidget::GetTangentAtSplinePoint(int32 PointIndex, TEnumAsByte<EUMGSplineCoordinateSpace::Type> CoordinateSpace) const {
    return FVector2D{};
}

FVector2D USplineWidget::GetTangentAtSplineInputKey(float InKey, TEnumAsByte<EUMGSplineCoordinateSpace::Type> CoordinateSpace) const {
    return FVector2D{};
}

FVector2D USplineWidget::GetTangentAtDistanceAlongSpline(float Distance, TEnumAsByte<EUMGSplineCoordinateSpace::Type> CoordinateSpace) const {
    return FVector2D{};
}

EUMGSplineType USplineWidget::GetSplineType() const {
    return EUMGSplineType::Linear;
}

float USplineWidget::GetSplineThickness() const {
    return 0.0f;
}

UMaterialInterface* USplineWidget::GetSplineMaterial() const {
    return NULL;
}

float USplineWidget::GetSplineLength() const {
    return 0.0f;
}

UMaterialInstanceDynamic* USplineWidget::GetSplineDynamicMaterial() {
    return NULL;
}

float USplineWidget::GetRotationAngleAtSplineInputKey(float InKey, TEnumAsByte<EUMGSplineCoordinateSpace::Type> CoordinateSpace) const {
    return 0.0f;
}

float USplineWidget::GetRotationAngleAtDistanceAlongSpline(float Distance, TEnumAsByte<EUMGSplineCoordinateSpace::Type> CoordinateSpace) const {
    return 0.0f;
}

int32 USplineWidget::GetNumberOfSplinePoints() const {
    return 0;
}

FVector2D USplineWidget::GetLocationAtSplinePoint(int32 PointIndex, TEnumAsByte<EUMGSplineCoordinateSpace::Type> CoordinateSpace) const {
    return FVector2D{};
}

FVector2D USplineWidget::GetLocationAtSplineInputKey(float InKey, TEnumAsByte<EUMGSplineCoordinateSpace::Type> CoordinateSpace) const {
    return FVector2D{};
}

FVector2D USplineWidget::GetLocationAtDistanceAlongSpline(float Distance, TEnumAsByte<EUMGSplineCoordinateSpace::Type> CoordinateSpace) const {
    return FVector2D{};
}

float USplineWidget::GetInputKeyAtDistanceAlongSpline(float Distance, TEnumAsByte<EUMGSplineCoordinateSpace::Type> CoordinateSpace) const {
    return 0.0f;
}

float USplineWidget::GetDistanceAlongSplineAtSplineInputKey(float InKey) const {
    return 0.0f;
}

FVector2D USplineWidget::GetDirectionAtSplinePoint(int32 PointIndex, TEnumAsByte<EUMGSplineCoordinateSpace::Type> CoordinateSpace) const {
    return FVector2D{};
}

FVector2D USplineWidget::GetDirectionAtSplineInputKey(float InKey, TEnumAsByte<EUMGSplineCoordinateSpace::Type> CoordinateSpace) const {
    return FVector2D{};
}

FVector2D USplineWidget::GetDirectionAtDistanceAlongSpline(float Distance, TEnumAsByte<EUMGSplineCoordinateSpace::Type> CoordinateSpace) const {
    return FVector2D{};
}

void USplineWidget::ChangeSplinePointAtIndex(const FUMGSplinePoint& SplinePoint, int32 Index, bool bUpdateSpline) {
}

void USplineWidget::AddSplinePointAtIndex(const FUMGSplinePoint& SplinePoint, int32 Index, bool bUpdateSpline) {
}

void USplineWidget::AddSplinePoint(const FUMGSplinePoint& SplinePoint, bool bUpdateSpline) {
}


