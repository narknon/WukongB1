#include "AkSettings.h"

UAkSettings::UAkSettings() {
    this->MaxSimultaneousReverbVolumes = 4;
    this->bSoundBanksTransfered = true;
    this->bAssetsMigrated = true;
    this->bProjectMigrated = true;
    this->bAutoConnectToWAAPI = false;
    this->DefaultOcclusionCollisionChannel = ECC_GameTraceChannel14;
    this->DefaultFitToGeometryCollisionChannel = ECC_WorldStatic;
    this->GlobalDecayAbsorption = 0.50f;
    this->SplitSwitchContainerMedia = false;
    this->SplitMediaPerFolder = false;
    this->UseEventBasedPackaging = false;
    this->CommandletCommitMessage = TEXT("Unreal Wwise Sound Data auto-generation");
    this->DefaultAssetCreationPath = TEXT("/Game/WwiseAudio");
    this->AudioRouting = EAkUnrealAudioRouting::Custom;
    this->bWwiseSoundEngineEnabled = true;
    this->bWwiseAudioLinkEnabled = false;
    this->bAkAudioMixerEnabled = false;
    this->DefaultScalingFactor = 1.00f;
    this->AskedToUseNewAssetManagement = false;
    this->bEnableMultiCoreRendering = false;
    this->MigratedEnableMultiCoreRendering = true;
    this->FixupRedirectorsDuringMigration = false;
}


