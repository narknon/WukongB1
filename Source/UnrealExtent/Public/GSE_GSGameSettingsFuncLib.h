#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GSE_GSGameSettingsFuncLib.generated.h"

class UWorld;

UCLASS(Blueprintable)
class UNREALEXTENT_API UGSE_GSGameSettingsFuncLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGSE_GSGameSettingsFuncLib();

    UFUNCTION(BlueprintCallable)
    static void SetXeSSPercentage(float Percentage);
    
    UFUNCTION(BlueprintCallable)
    static void SetRayTracingQuality(int32 RTXLevel);
    
    UFUNCTION(BlueprintCallable)
    static bool IsLowFeatureLevelGPU();
    
    UFUNCTION(BlueprintCallable)
    static FString GetRHIAdapterName();
    
    UFUNCTION(BlueprintCallable)
    static FString GetMainMonitorID();
    
    UFUNCTION(BlueprintCallable)
    static bool GetIsHDRViewport(UWorld* World);
    
    UFUNCTION(BlueprintCallable)
    static bool GetGRHISupportsRayTracing();
    
    UFUNCTION(BlueprintCallable)
    static FString GetDefaultLanguage();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetCurGameMainScreen();
    
    UFUNCTION(BlueprintCallable)
    static void ApplyGSGameSettings(bool bSaveSettings);
    
    UFUNCTION(BlueprintCallable)
    static void ApplyGSGameResolutionSettings(bool bSaveSettings);
    
};

