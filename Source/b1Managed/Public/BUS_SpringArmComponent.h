#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "BGUSpringArmComponent.h"
#include "BUS_SpringArmComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBUS_SpringArmComponent : public UBGUSpringArmComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 IsXSmoothFixed: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 IsYSmoothFixed: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 IsZSmoothFixed: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultCameraLagSpeed;
    
    UBUS_SpringArmComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector BlendLocationsInCS(const FVector& OriginArmLocation, const FVector& DesiredArmLocation, const FHitResult& HitResult, float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector CalcSmoothLocation(FVector Current, FVector Target, float DeltaTime, FVector SmoothSpeed);
    
};

