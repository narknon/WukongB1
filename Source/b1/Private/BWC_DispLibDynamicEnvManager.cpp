#include "BWC_DispLibDynamicEnvManager.h"
#include "Components/ArrowComponent.h"
#include "Components/DirectionalLightComponent.h"
#include "Components/ExponentialHeightFogComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SkyAtmosphereComponent.h"
#include "Components/SkyLightComponent.h"
#include "NiagaraComponent.h"
#include "BWS_DispLibEnvSystemConf.h"

ABWC_DispLibDynamicEnvManager::ABWC_DispLibDynamicEnvManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
    this->MoonPositionCurve = NULL;
    this->EnvSystemConf = CreateDefaultSubobject<UBWS_DispLibEnvSystemConf>(TEXT("DefaultEnvConf"));
    this->Weather = EBGW_DispLibEnvWeather::Sunny;
    this->TimeOfDay = 1200.00f;
    this->AutoTimeOfDay = false;
    this->AutoRandormWeather = false;
    this->bEnableDayNightCircle = false;
    this->SceneRoot = (USceneComponent*)RootComponent;
    this->SunLight = CreateDefaultSubobject<UDirectionalLightComponent>(TEXT("SunLight"));
    this->MoonLight = CreateDefaultSubobject<UDirectionalLightComponent>(TEXT("MoonLight"));
    this->SkyLight = CreateDefaultSubobject<USkyLightComponent>(TEXT("SkyLight"));
    this->HeightFog = CreateDefaultSubobject<UExponentialHeightFogComponent>(TEXT("HeightFog"));
    this->SkyAtmosphere = CreateDefaultSubobject<USkyAtmosphereComponent>(TEXT("SkyAtmosphere"));
    this->SunRoot = CreateDefaultSubobject<UArrowComponent>(TEXT("SunRoot"));
    this->MoonRoot = CreateDefaultSubobject<UArrowComponent>(TEXT("MoonRoot"));
    this->WeathFXRoot = CreateDefaultSubobject<UNiagaraComponent>(TEXT("WeathFXRoot"));
    this->WeatherFXActor = NULL;
}

void ABWC_DispLibDynamicEnvManager::UpdateSunAndMoonAngle(const FBWC_DispLibEnvSettings& Settings) {
}

void ABWC_DispLibDynamicEnvManager::UpdateEnvSystemConfig(UBWS_DispLibEnvSystemConf* SystemConf) {
}

void ABWC_DispLibDynamicEnvManager::SwithToNarrative(bool Enable, float ChangeDuration) {
}

void ABWC_DispLibDynamicEnvManager::SetWeather(EBGW_DispLibEnvWeather InWeather) {
}

void ABWC_DispLibDynamicEnvManager::SetEnvSettings(bool IsNight, const FVector& CameraLocation) {
}

EBGW_DispLibEnvWeather ABWC_DispLibDynamicEnvManager::RandomWeather(const FVector& ViewLocation) {
    return EBGW_DispLibEnvWeather::Sunny;
}

void ABWC_DispLibDynamicEnvManager::OverrideEnvSettings(const FBWC_DispLibEnvSettings& Src, FBWC_DispLibEnvSettings& Dest, float Weight) {
}

void ABWC_DispLibDynamicEnvManager::OnWeatherChanged_Implementation(const FVector& CameraLocation) {
}

void ABWC_DispLibDynamicEnvManager::OnTickEnvVolume(FBWC_DispLibEnvSettings& EnvSettings, const FVector& ViewLocation, float InTime) {
}

void ABWC_DispLibDynamicEnvManager::OnLerpEnvSettings_Implementation(float Weight, float InTime, const FBWC_DispLibEnvSettings& Src) {
}

void ABWC_DispLibDynamicEnvManager::OnApplyEnvSettings_Implementation(bool IsNight) {
}

bool ABWC_DispLibDynamicEnvManager::IsWeatherAvailable(EBGW_DispLibEnvWeather InWeather, const FVector& ViewLocation) {
    return false;
}


