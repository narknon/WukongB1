#include "EnvironmentSurfaceEffectMgr.h"

AEnvironmentSurfaceEffectMgr::AEnvironmentSurfaceEffectMgr(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultEnvironmentSurfaceEffectID = 0;
    this->WeatherType = EWeatherType::None;
}

void AEnvironmentSurfaceEffectMgr::UnregisterVolume(const TSoftObjectPtr<ABGWEnvironmentSurfaceVolume>& InVolume, bool IsDisableVolume) {
}

void AEnvironmentSurfaceEffectMgr::RegisterVolume(const TSoftObjectPtr<ABGWEnvironmentSurfaceVolume>& InVolume) {
}

ABGWEnvironmentSurfaceVolume* AEnvironmentSurfaceEffectMgr::GetEnvironmentSurfaceVolumeByLocation(const FVector& Location) {
    return NULL;
}


