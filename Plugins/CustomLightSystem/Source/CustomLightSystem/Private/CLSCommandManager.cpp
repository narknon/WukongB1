#include "CLSCommandManager.h"

ACLSCommandManager::ACLSCommandManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->LightManager = NULL;
    this->VolumeManager = NULL;
    this->CommandManagerID = 0;
}

void ACLSCommandManager::SwitchLightsAndFogs(ADirectionalLight* InTargetDirectionalLight, ASkyLight* InTargetSkyLight, ASkyAtmosphere* InTargetAtmosphericFog, AExponentialHeightFog* InTargetExponentialHeightFog, FCLSMaterialParametersCollectionProperty InTargetCLSVolumeMPCProperty, FCLSMaterialParametersCollectionProperty InOriginalCLSVolumeMPCProperty, float InTargetVolumePercentage, bool ForceUpdate) {
}

void ACLSCommandManager::SafelySwitchLightsAndFogs(ADirectionalLight* InTargetDirectionalLight, ASkyLight* InTargetSkyLight, ASkyAtmosphere* InTargetAtmosphericFog, AExponentialHeightFog* InTargetExponentialHeightFog, FCLSMaterialParametersCollectionProperty InTargetCLSVolumeMPCProperty, FCLSMaterialParametersCollectionProperty InOriginalCLSVolumeMPCProperty, float InTargetVolumePercentage, bool ForceUpdate) {
}

void ACLSCommandManager::ReactiveAnotherManager() {
}

void ACLSCommandManager::InterruptAnotherManager() {
}

void ACLSCommandManager::InitializeCommandManager() {
}


