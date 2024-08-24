#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/Widget.h"
#include "EUMGSplineCoordinateSpace.h"
#include "EUMGSplineType.h"
#include "UMGSplineCurves.h"
#include "UMGSplineDebugInfo.h"
#include "UMGSplineInfo.h"
#include "UMGSplinePoint.h"
#include "SplineWidget.generated.h"

class UMaterialInstanceDynamic;
class UMaterialInterface;

UCLASS(Blueprintable)
class UMGSPLINE_API USplineWidget : public UWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUMGSplineInfo SplineInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUMGSplineDebugInfo SplineDebugInfo;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FUMGSplineCurves SplineCurves;
    
public:
    USplineWidget();

    UFUNCTION(BlueprintCallable)
    void UpdateSpline();
    
    UFUNCTION(BlueprintCallable)
    void SetSplineType(EUMGSplineType Type);
    
    UFUNCTION(BlueprintCallable)
    void SetSplineThickness(float Thickness);
    
    UFUNCTION(BlueprintCallable)
    void SetSplineMaterial(UMaterialInterface* Material);
    
    UFUNCTION(BlueprintCallable)
    void RemoveSplinePoint(int32 Index, bool bUpdateSpline);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAllSplinePoint(bool bUpdateSpline);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetTangentAtSplinePoint(int32 PointIndex, TEnumAsByte<EUMGSplineCoordinateSpace::Type> CoordinateSpace) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetTangentAtSplineInputKey(float InKey, TEnumAsByte<EUMGSplineCoordinateSpace::Type> CoordinateSpace) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetTangentAtDistanceAlongSpline(float Distance, TEnumAsByte<EUMGSplineCoordinateSpace::Type> CoordinateSpace) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EUMGSplineType GetSplineType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSplineThickness() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMaterialInterface* GetSplineMaterial() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSplineLength() const;
    
    UFUNCTION(BlueprintCallable)
    UMaterialInstanceDynamic* GetSplineDynamicMaterial();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRotationAngleAtSplineInputKey(float InKey, TEnumAsByte<EUMGSplineCoordinateSpace::Type> CoordinateSpace) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRotationAngleAtDistanceAlongSpline(float Distance, TEnumAsByte<EUMGSplineCoordinateSpace::Type> CoordinateSpace) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumberOfSplinePoints() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetLocationAtSplinePoint(int32 PointIndex, TEnumAsByte<EUMGSplineCoordinateSpace::Type> CoordinateSpace) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetLocationAtSplineInputKey(float InKey, TEnumAsByte<EUMGSplineCoordinateSpace::Type> CoordinateSpace) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetLocationAtDistanceAlongSpline(float Distance, TEnumAsByte<EUMGSplineCoordinateSpace::Type> CoordinateSpace) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetInputKeyAtDistanceAlongSpline(float Distance, TEnumAsByte<EUMGSplineCoordinateSpace::Type> CoordinateSpace) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDistanceAlongSplineAtSplineInputKey(float InKey) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetDirectionAtSplinePoint(int32 PointIndex, TEnumAsByte<EUMGSplineCoordinateSpace::Type> CoordinateSpace) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetDirectionAtSplineInputKey(float InKey, TEnumAsByte<EUMGSplineCoordinateSpace::Type> CoordinateSpace) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetDirectionAtDistanceAlongSpline(float Distance, TEnumAsByte<EUMGSplineCoordinateSpace::Type> CoordinateSpace) const;
    
    UFUNCTION(BlueprintCallable)
    void ChangeSplinePointAtIndex(const FUMGSplinePoint& SplinePoint, int32 Index, bool bUpdateSpline);
    
    UFUNCTION(BlueprintCallable)
    void AddSplinePointAtIndex(const FUMGSplinePoint& SplinePoint, int32 Index, bool bUpdateSpline);
    
    UFUNCTION(BlueprintCallable)
    void AddSplinePoint(const FUMGSplinePoint& SplinePoint, bool bUpdateSpline);
    
};

