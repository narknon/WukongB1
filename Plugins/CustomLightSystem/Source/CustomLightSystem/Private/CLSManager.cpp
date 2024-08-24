#include "CLSManager.h"
#include "Components/DirectionalLightComponent.h"
#include "Components/ExponentialHeightFogComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SkyAtmosphereComponent.h"
#include "Components/SkyLightComponent.h"
#include "CustomVariableComponent.h"

ACLSManager::ACLSManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bRelevantForLevelBounds = false;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->bEnableManager = false;
    this->bEnableDebugLog = false;
    this->ActorLightAttenuationMaxRange = 1500.00f;
    this->ActorLightAttenuationMinRange = 500.00f;
    this->VolumeManagerID = 0;
    this->MPC = NULL;
    this->MarkDirtyDeltaPercentage = 0.10f;
    this->bEnableSkyLightCapture = false;
    this->bEnableRayTrace = false;
    this->RayTraceQuality = 0;
    this->PlayerLightAttenuation = 1.00f;
    this->ActorLightAttenuation = 1.00f;
    this->DirectionalLightComponent = CreateDefaultSubobject<UDirectionalLightComponent>(TEXT("DirectionalLightComponent1"));
    this->SkyLightComponent = CreateDefaultSubobject<USkyLightComponent>(TEXT("SkyLightComponent0"));
    this->AtmosphereComponent = CreateDefaultSubobject<USkyAtmosphereComponent>(TEXT("SkyAtmosphereComponent"));
    this->HeightFogComponent = CreateDefaultSubobject<UExponentialHeightFogComponent>(TEXT("HeightFogComponent0"));
    this->CustomVariableComponent = CreateDefaultSubobject<UCustomVariableComponent>(TEXT("CustomVariable"));
    this->MinSwitchDistanceInEditor = 1000.00f;
    this->RTXSettingsActor = NULL;
    this->UpdateDLightTime = 0.00f;
    this->UpdateDLightTotalTime = 0.10f;
    this->UpdateRadiusThresholdHandle = 0;
    this->VisualShadowRadiusThreshold = 0.50f;
    this->AtmosphereComponent->SetupAttachment(RootComponent);
    this->CustomVariableComponent->SetupAttachment(RootComponent);
    this->DirectionalLightComponent->SetupAttachment(RootComponent);
    this->HeightFogComponent->SetupAttachment(RootComponent);
    this->SkyLightComponent->SetupAttachment(RootComponent);
}

FCLSWatchData ACLSManager::UpdateAndGetWatchData() {
    return FCLSWatchData{};
}

void ACLSManager::SetPlayerLightAttenuation(float InPlayerLightAttenuation) {
}

void ACLSManager::SetEnableManager(bool bInEnableManager) {
}

void ACLSManager::SetActorLightAttenuation(float InActorLightAttenuation) {
}

void ACLSManager::RemoveAllDynamicLevel() {
}


