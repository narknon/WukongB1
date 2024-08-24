#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "BWC_DispLibEnvSettings.h"
#include "EBGW_DispLibEnvWeather.h"
#include "BWC_DispLibDynamicEnvManager.generated.h"

class UArrowComponent;
class UBWS_DispLibEnvSystemConf;
class UCurveFloat;
class UDirectionalLightComponent;
class UExponentialHeightFogComponent;
class USceneComponent;
class USkyAtmosphereComponent;
class USkyLightComponent;

UCLASS(Blueprintable)
class ABWC_DispLibDynamicEnvManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* MoonPositionCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBWS_DispLibEnvSystemConf* EnvSystemConf;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBGW_DispLibEnvWeather Weather;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeOfDay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AutoTimeOfDay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AutoRandormWeather;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableDayNightCircle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D WindDir;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBWC_DispLibEnvSettings FinalEnvSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDirectionalLightComponent* SunLight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDirectionalLightComponent* MoonLight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkyLightComponent* SkyLight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UExponentialHeightFogComponent* HeightFog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkyAtmosphereComponent* SkyAtmosphere;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* SunRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* MoonRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* WeathFXRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* WeatherFXActor;
    
    ABWC_DispLibDynamicEnvManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateSunAndMoonAngle(const FBWC_DispLibEnvSettings& Settings);
    
    UFUNCTION(BlueprintCallable)
    void UpdateEnvSystemConfig(UBWS_DispLibEnvSystemConf* SystemConf);
    
    UFUNCTION(BlueprintCallable)
    void SwithToNarrative(bool Enable, float ChangeDuration);
    
    UFUNCTION(BlueprintCallable)
    void SetWeather(EBGW_DispLibEnvWeather InWeather);
    
    UFUNCTION(BlueprintCallable)
    void SetEnvSettings(bool IsNight, const FVector& CameraLocation);
    
    UFUNCTION(BlueprintCallable)
    EBGW_DispLibEnvWeather RandomWeather(const FVector& ViewLocation);
    
    UFUNCTION(BlueprintCallable)
    void OverrideEnvSettings(const FBWC_DispLibEnvSettings& Src, FBWC_DispLibEnvSettings& Dest, float Weight);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnWeatherChanged(const FVector& CameraLocation);
    
    UFUNCTION(BlueprintCallable)
    void OnTickEnvVolume(FBWC_DispLibEnvSettings& EnvSettings, const FVector& ViewLocation, float InTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnLerpEnvSettings(float Weight, float InTime, const FBWC_DispLibEnvSettings& Src);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnApplyEnvSettings(bool IsNight);
    
    UFUNCTION(BlueprintCallable)
    bool IsWeatherAvailable(EBGW_DispLibEnvWeather InWeather, const FVector& ViewLocation);
    
};

