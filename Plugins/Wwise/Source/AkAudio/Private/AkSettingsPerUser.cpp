#include "AkSettingsPerUser.h"

UAkSettingsPerUser::UAkSettingsPerUser() {
    this->WaapiIPAddress = TEXT("127.0.0.1");
    this->WaapiPort = 8080;
    this->bAutoConnectToWAAPI = false;
    this->AutoSyncSelection = true;
    this->WaapiTranslatorTimeout = 0;
    this->SuppressGeneratedSoundBanksPathWarnings = false;
    this->SoundDataGenerationSkipLanguage = false;
    this->AskForWwiseAssetReload = false;
}


