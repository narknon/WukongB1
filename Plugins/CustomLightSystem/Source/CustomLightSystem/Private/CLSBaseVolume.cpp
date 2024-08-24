#include "CLSBaseVolume.h"
#include "Components/DirectionalLightComponent.h"
#include "Components/ExponentialHeightFogComponent.h"
#include "Components/SkyAtmosphereComponent.h"
#include "Components/SkyLightComponent.h"
#include "CustomVariableComponent.h"

ACLSBaseVolume::ACLSBaseVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->DirectionalLight = NULL;
    this->SkyLight = NULL;
    this->AtmosphericFog = NULL;
    this->ExponentialHeightFog = NULL;
    this->VolumeManagerID = 0;
    this->LengthOfBuffSpace = 10.00f;
    this->SortWeight = 0.00f;
    this->SpeedAlpha = 0.10f;
    this->PlayerLightSpeedAlpha = 0.10f;
    this->bUseCustomBlendOutSpeed = false;
    this->CustomBlendOutSpeedAlpha = 100.00f;
    this->Level = 3;
    this->DynamicLevel = 0;
    this->bUseSceneLight = false;
    this->bDisableDirectionalLight = false;
    this->bDisableSkyLight = false;
    this->bDisableAtmospheric = false;
    this->bDisableHeightFog = false;
    this->bForceEnableAnyWhere = false;
    this->DirectionalLightComponent = CreateDefaultSubobject<UDirectionalLightComponent>(TEXT("DirectionalLightComponent1"));
    this->SkyLightComponent = CreateDefaultSubobject<USkyLightComponent>(TEXT("SkyLightComponent0"));
    this->AtmosphereComponent = CreateDefaultSubobject<USkyAtmosphereComponent>(TEXT("SkyAtmosphereComponent"));
    this->ExponentialHeightFogComponent = CreateDefaultSubobject<UExponentialHeightFogComponent>(TEXT("HeightFogComponent0"));
    this->CustomVariableComponent = CreateDefaultSubobject<UCustomVariableComponent>(TEXT("CustomVariable"));
    this->bInVolume = false;
    this->DistanceToPoint = 0.00f;
    this->AtmosphereComponent->SetupAttachment(RootComponent);
    this->CustomVariableComponent->SetupAttachment(RootComponent);
    this->DirectionalLightComponent->SetupAttachment(RootComponent);
    this->ExponentialHeightFogComponent->SetupAttachment(RootComponent);
    this->SkyLightComponent->SetupAttachment(RootComponent);
}

void ACLSBaseVolume::SetForceEnableAnyWhere(bool bInForceEnableAnyWhere) {
}

void ACLSBaseVolume::SetDynamicLevel(int32 InDynamicLevel) {
}

void ACLSBaseVolume::CopyCLsDataFromMaster() {
}

void ACLSBaseVolume::CopyClsData2LightComponents() {
}


