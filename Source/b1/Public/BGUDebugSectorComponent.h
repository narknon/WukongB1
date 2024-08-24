#pragma once
#include "CoreMinimal.h"
#include "Components/ShapeComponent.h"
#include "BGUDebugSectorComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBGUDebugSectorComponent : public UShapeComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    float SectorRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    float SectorMinAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    float SectorMaxAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    float SectorThickness;
    
public:
    UBGUDebugSectorComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetSectorRadius(float InSectorRadius);
    
    UFUNCTION(BlueprintCallable)
    void SetSectorMinAngle(float InMinAngle);
    
    UFUNCTION(BlueprintCallable)
    void SetSectorMaxAngle(float InMaxAngle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetUnscaledSectorRadius() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetShapeScale() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetScaledSectorRadius() const;
    
};

