#include "CLSVolumeManager.h"

ACLSVolumeManager::ACLSVolumeManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->LightManager = NULL;
    this->VolumeManagerID = 0;
    this->bIsSwitchActive = false;
    this->bIsCheckWARP = true;
    this->WARPDistance = 1000.00f;
    this->bIsDebug = false;
    this->bIsForcePPV = false;
    this->ValidDirectionalLight = NULL;
    this->ValidSkyLight = NULL;
    this->ValidAtmosphericFog = NULL;
    this->ValidExponentialHeightFog = NULL;
    this->ValidCLSBaseVolume = NULL;
    this->OriginalValidCLSBaseVolume = NULL;
    this->TemplateValidCLSBaseVolume = NULL;
    this->TargetValidCLSBaseVolume = NULL;
    this->bForceUpdateVolume = false;
    this->DeltaWARPDistance = 0.00f;
}

void ACLSVolumeManager::UpdateVolume(FVector position) {
}

void ACLSVolumeManager::UpdateProperty() {
}

void ACLSVolumeManager::SwitchVolumeProcessParameters(ACLSBaseVolume* TargetVolume) const {
}

void ACLSVolumeManager::SwitchToValidLightAndFog(FVector position) {
}

void ACLSVolumeManager::SetLightManagerActive(bool NewActive) {
}

void ACLSVolumeManager::RunVolumeProcessParameterCommand(const FString& TargetParameter) const {
}

void ACLSVolumeManager::InitializeVolumes(ACLSBaseVolume* InVolume) {
}

TMap<ACLSBaseVolume*, float> ACLSVolumeManager::GetValidVolumeByWeight(FVector position) {
    return TMap<ACLSBaseVolume*, float>();
}

void ACLSVolumeManager::ForceDortPPV(FVector ViewLocation) {
}

bool ACLSVolumeManager::CheckValidByWeight(FVector position) {
    return false;
}

bool ACLSVolumeManager::CheckReforenceVolumeListValid() {
    return false;
}

TArray<ACLSBaseVolume*> ACLSVolumeManager::CheckOverlapVolumes(FVector position) {
    return TArray<ACLSBaseVolume*>();
}


