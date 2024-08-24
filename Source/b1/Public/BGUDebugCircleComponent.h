#pragma once
#include "CoreMinimal.h"
#include "Components/ShapeComponent.h"
#include "BGUDebugCircleComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBGUDebugCircleComponent : public UShapeComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    float CircleRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    float CircleThickness;
    
public:
    UBGUDebugCircleComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetCircleRadius(float InCircleRadius);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetUnscaledCircleRadius() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetShapeScale() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetScaledCircleRadius() const;
    
};

