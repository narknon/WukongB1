#include "CLSLightManager.h"

ACLSLightManager::ACLSLightManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->VolumeManager = NULL;
    this->LightManagerID = 0;
    this->SpeedAlpha = 0.10f;
    this->bIsSwitchActive = true;
    this->bIsAllActorActive = true;
    this->TargetDLight = NULL;
    this->DLight = NULL;
    this->TargetSLight = NULL;
    this->SLight = NULL;
    this->TargetAFog = NULL;
    this->AFog = NULL;
    this->TargetEHFog = NULL;
    this->EHFog = NULL;
    this->MPC = NULL;
    this->OriginalDirectionalLight = NULL;
    this->OriginalSkyLight = NULL;
    this->OriginalAtmosphericFog = NULL;
    this->OriginalExponentialHeightFog = NULL;
    this->OriginalVloumePercentage = 0.00f;
    this->TargetDirectionalLight = NULL;
    this->TargetSkyLight = NULL;
    this->TargetAtmosphericFog = NULL;
    this->TargetExponentialHeightFog = NULL;
    this->TargetVolumePercentage = 0.00f;
    this->TickTargetVolumePercentage = 0.00f;
    this->bOriginlaVolumeChanged = false;
}

void ACLSLightManager::SyncLightsAndFogs(ADirectionalLight* InTargetDirectionalLight, ASkyLight* InTargetSkyLight, ASkyAtmosphere* InTargetAtmosphericFog, AExponentialHeightFog* InTargetExponentialHeightFog, FCLSMaterialParametersCollectionProperty InTargetCLSVolumeMPCProperty, FCLSMaterialParametersCollectionProperty InOriginalCLSVolumeMPCProperty, float InTargetVolumePercentage, bool ForceUpdate) {
}

bool ACLSLightManager::SwitchSkyLight(int32 Index) {
    return false;
}

void ACLSLightManager::SwitchLightAndFog(float Percentage) {
}

bool ACLSLightManager::SwitchExponentialHeightFog(int32 Index) {
    return false;
}

bool ACLSLightManager::SwitchDirectionalLight(int32 Index) {
    return false;
}

bool ACLSLightManager::SwitchAtmosphericFog(int32 Index) {
    return false;
}

bool ACLSLightManager::SwitchAllLightAndFog(int32 Index) {
    return false;
}

void ACLSLightManager::SetLightManagerActive(bool NewActive) {
}

bool ACLSLightManager::InitializeTagActor(UCLSTagComponent* TagComponent) {
    return false;
}

void ACLSLightManager::ForceUpdateTagComponents() {
}

void ACLSLightManager::ForceUpdateParameters() {
}

void ACLSLightManager::DisableAllActor() const {
}

bool ACLSLightManager::CheckReforenceListValid() {
    return false;
}


