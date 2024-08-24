#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameFramework/GameUserSettings.h"
#include "EGSGraphicsMemoryMode.h"
#include "EGSPriorityMode.h"
#include "EGSScreenMode.h"
#include "EScalabilityQuality.h"
#include "GSMonitorInfo.h"
#include "GSScalabilityQualities.h"
#include "GSE_SystemSettingsFuncLib.generated.h"

class UObject;

UCLASS(Blueprintable)
class UNREALEXTENT_API UGSE_SystemSettingsFuncLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGSE_SystemSettingsFuncLib();

private:
    UFUNCTION(BlueprintCallable)
    static void SetVSyncEnabled(bool bEnableVSync);
    
    UFUNCTION(BlueprintCallable)
    static void SetViewDistanceQuality(EScalabilityQuality InViewDistanceQuality);
    
    UFUNCTION(BlueprintCallable)
    static void SetTextureQuality(EScalabilityQuality InTextureQuality);
    
    UFUNCTION(BlueprintCallable)
    static void SetTargetScreenModeV2(TEnumAsByte<EWindowMode::Type> TargetWindowMode);
    
    UFUNCTION(BlueprintCallable)
    static void SetTargetScreenMode(EGSScreenMode TargetScreenMode);
    
    UFUNCTION(BlueprintCallable)
    static void SetTargetResolution(FIntPoint TargetResolution, bool NeedFresh);
    
    UFUNCTION(BlueprintCallable)
    static void SetShadowQuality(EScalabilityQuality InShadowQuality);
    
    UFUNCTION(BlueprintCallable)
    static void SetShadingQuality(EScalabilityQuality InShadingQuality);
    
    UFUNCTION(BlueprintCallable)
    static void SetScreenPos(FVector2D position);
    
    UFUNCTION(BlueprintCallable)
    static void SetScalabilityQuality(EScalabilityQuality TargetGSQualityLevel);
    
    UFUNCTION(BlueprintCallable)
    static void SetScalabilityQualities(FGSScalabilityQualities Qualities);
    
    UFUNCTION(BlueprintCallable)
    static void SetResolutionQualityScale(float InResolutionQualityScale);
    
    UFUNCTION(BlueprintCallable)
    static void SetResolutionQualityLevel(EScalabilityQuality InResolutionQualityLevel);
    
    UFUNCTION(BlueprintCallable)
    static void SetReflectionQuality(EScalabilityQuality InReflectionQuality);
    
    UFUNCTION(BlueprintCallable)
    static void SetPriorityMode(EGSPriorityMode InPriorityMode);
    
    UFUNCTION(BlueprintCallable)
    static void SetPostProcessQuality(EScalabilityQuality InPostProcessQuality);
    
    UFUNCTION(BlueprintCallable)
    static void SetMonitorAsPrimaryV2(const FString& InMonitorID);
    
    UFUNCTION(BlueprintCallable)
    static void SetMonitorAsPrimary(const FString& MonitorID);
    
    UFUNCTION(BlueprintCallable)
    static void SetGlobalIlluminationQuality(EScalabilityQuality InGIQuality);
    
    UFUNCTION(BlueprintCallable)
    static void SetFrameRateLimit(float InFrameRateLimit);
    
    UFUNCTION(BlueprintCallable)
    static void SetFoliageQuality(EScalabilityQuality InFoliageQuality);
    
    UFUNCTION(BlueprintCallable)
    static void SetEffectsQuality(EScalabilityQuality InEffectQuality);
    
    UFUNCTION(BlueprintCallable)
    static void SetAntiAliasingQuality(EScalabilityQuality InAntiAliasingQuality);
    
    UFUNCTION(BlueprintCallable)
    static void RefreshBenchmarkMonitor();
    
    UFUNCTION(BlueprintCallable)
    void OnViewportResizedEvent(FIntPoint NewSize);
    
    UFUNCTION(BlueprintCallable)
    void OnMonitorAsPrimaryChange(int32 TargetPrimaryMonitorIndex);
    
    UFUNCTION(BlueprintCallable)
    static void Init();
    
    UFUNCTION(BlueprintCallable)
    static void GMChangeMonitorAsPrimary(int32 MonitorIdx);
    
    UFUNCTION(BlueprintCallable)
    static bool GetVSyncEnabled();
    
    UFUNCTION(BlueprintCallable)
    static float GetUsedGraphicsMemory(EGSGraphicsMemoryMode InQueryType);
    
    UFUNCTION(BlueprintCallable)
    static FVector2D GetScreenSize();
    
    UFUNCTION(BlueprintCallable)
    static float GetResolutionScaleFromQualityLevel(EScalabilityQuality InQualityLevel);
    
    UFUNCTION(BlueprintCallable)
    static FGSScalabilityQualities GetRecommendedScalabilityQuality(bool bLogInfo);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FIntPoint> GetProportionalResolutions(FIntPoint AspectRatio);
    
    UFUNCTION(BlueprintCallable)
    static FIntPoint GetGSystemResolution();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetGraphicsMemoryInfo(EGSGraphicsMemoryMode InGraphicsMemoryMode);
    
    UFUNCTION(BlueprintCallable)
    static float GetGPUUsedTime();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetGPUUsedPercentage();
    
    UFUNCTION(BlueprintCallable)
    static float GetFrameRateLimit();
    
    UFUNCTION(BlueprintCallable)
    static TEnumAsByte<EWindowMode::Type> GetCurrentScreenModeV2();
    
    UFUNCTION(BlueprintCallable)
    static EGSScreenMode GetCurrentScreenMode();
    
    UFUNCTION(BlueprintCallable)
    static FGSScalabilityQualities GetCurrentScalabilityQuality(bool bLogInfo);
    
    UFUNCTION(BlueprintCallable)
    static FGSScalabilityQualities GetCurrentScalabilityQualities(bool bLogInfo);
    
    UFUNCTION(BlueprintCallable)
    static FIntPoint GetCurrentResolution();
    
    UFUNCTION(BlueprintCallable)
    static float GetCurrentFPS();
    
    UFUNCTION(BlueprintCallable)
    static float GetCPUUsedTime();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetCPUUsedPercentage();
    
    UFUNCTION(BlueprintCallable)
    static TArray<FIntPoint> GetAvailableResolutionsByMonitorID(int32 InMonitorID);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FIntPoint> GetAvailableResolutions();
    
    UFUNCTION(BlueprintCallable)
    static float GetAvailableGraphicsMemory(EGSGraphicsMemoryMode InQueryType);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FGSMonitorInfo> GetAllMonitorInfo();
    
    UFUNCTION(BlueprintCallable)
    static FString EngineSettingGetString(const FString& Section, const FString& Key);
    
    UFUNCTION(BlueprintCallable)
    static void BGUUnBindOnViewportResizedEvent(UObject* Obj, FName FuncName);
    
    UFUNCTION(BlueprintCallable)
    static void BGUUnBindOnMonitorAsPrimaryChange(UObject* Obj, FName FuncName);
    
    UFUNCTION(BlueprintCallable)
    static void BGUUnBindOnCultureChangedEvent(UObject* Obj, FName FuncName);
    
    UFUNCTION(BlueprintCallable)
    static void BGUBindOnViewportResizedEvent(UObject* Obj, FName FuncName);
    
    UFUNCTION(BlueprintCallable)
    static void BGUBindOnMonitorAsPrimaryChange(UObject* Obj, FName FuncName);
    
    UFUNCTION(BlueprintCallable)
    static void BGUBindOnCultureChangedEvent(UObject* Obj, FName FuncName);
    
    UFUNCTION(BlueprintCallable)
    static void ApplySystemSettings(bool bSaveSettings);
    
};

