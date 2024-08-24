#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/EngineTypes.h"
#include "GSE_CameraUtilFuncLib.generated.h"

class AActor;
class APlayerCameraManager;
class APlayerController;
class UCameraComponent;
class UObject;

UCLASS(Blueprintable)
class UNREALEXTENT_API UGSE_CameraUtilFuncLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGSE_CameraUtilFuncLib();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool SetLocalPlayerAspectRatioAxisConstraint(APlayerController* PlayerController, TEnumAsByte<EAspectRatioAxisConstraint> TargetAspectRatioAxisConstraint);
    
    UFUNCTION(BlueprintCallable)
    static void SetCameraFocalParams(UCameraComponent* InCamera, float InFocalDistance, float InDepthBlurKm, float DepthBlurRadius);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static bool IsPositionInScreenViewport(UObject* WorldContext, const FVector& position);
    
    UFUNCTION(BlueprintCallable)
    static AActor* GetCameraViewTarget(APlayerCameraManager* CameraManager);
    
    UFUNCTION(BlueprintCallable)
    static void GetCameraFocalParams(UCameraComponent* InCamera, float& OutFocalDistance, float& OutDepthBlurKm, float& OutDepthBlurRadius);
    
};

