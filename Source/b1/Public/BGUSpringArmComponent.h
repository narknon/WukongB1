#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "GameFramework/SpringArmComponent.h"
#include "BGUSpringArmComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class B1_API UBGUSpringArmComponent : public USpringArmComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableHideMeshTrace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpringBackSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CameraLagMaxDistance3Axis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CameraLagSpeed3Axis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CameraLagInverseSpeed3Axis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraLagUseMaxOffset;
    
    UBGUSpringArmComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ResetArmLengthLerpCache();
    
    UFUNCTION(BlueprintCallable)
    void GetPreviousValues(FVector& OutPreviousDesiredLoc, FVector& OutPreviousArmOrigin, FRotator& OutPreviousDesiredRot);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector CalcSmoothLocation(FVector Current, FVector Target, float DeltaTime, FVector SmoothSpeed);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector BlendLocationsInCS(const FVector& OriginArmLocation, const FVector& DesiredArmLocation, const FHitResult& HitResult, float DeltaTime);
    
};

