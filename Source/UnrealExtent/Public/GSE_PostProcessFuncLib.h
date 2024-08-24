#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/Scene.h"
#include "GSE_PostProcessFuncLib.generated.h"

class AActor;
class APostProcessVolume;
class UCameraComponent;
class UMaterialInterface;
class UPostProcessComponent;

UCLASS(Blueprintable)
class UNREALEXTENT_API UGSE_PostProcessFuncLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGSE_PostProcessFuncLib();

    UFUNCTION(BlueprintCallable)
    static void SetPPVWeightedBlendableWeightByIndex(APostProcessVolume* PPV, int32 PPMatIndex, float Weight);
    
    UFUNCTION(BlueprintCallable)
    static void SetPPVWeightedBlendableWeight(APostProcessVolume* PPV, UMaterialInterface* PPMaterialInterface, float Weight);
    
    UFUNCTION(BlueprintCallable)
    static void SetPPCompWeightedBlendableWeightByIndex(UPostProcessComponent* PPComp, int32 PPMatIndex, float Weight);
    
    UFUNCTION(BlueprintCallable)
    static void SetPPCompWeightedBlendableWeight(UPostProcessComponent* PPComp, UMaterialInterface* PPMaterialInterface, float Weight);
    
    UFUNCTION(BlueprintCallable)
    static void SetCameraWeightedBlendableWeightByIndex(AActor* CameraActor, int32 PPMatIndex, float Weight);
    
    UFUNCTION(BlueprintCallable)
    static void SetCameraCompWeightedBlendableWeightByIndex(UCameraComponent* CameraComp, int32 PPMatIndex, float Weight);
    
    UFUNCTION(BlueprintCallable)
    static void RemovePPVWeightBlendable(APostProcessVolume* PPV, UMaterialInterface* PPMaterialInterface);
    
    UFUNCTION(BlueprintCallable)
    static void RemovePPCompWeightBlendable(UPostProcessComponent* PPComp, UMaterialInterface* PPMaterialInterface);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static FPostProcessSettings GetSceneViewFinalPostProcessSettings(AActor* WorldContext);
    
};

