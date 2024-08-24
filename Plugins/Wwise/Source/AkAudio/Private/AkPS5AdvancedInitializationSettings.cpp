#include "AkPS5AdvancedInitializationSettings.h"

FAkPS5AdvancedInitializationSettings::FAkPS5AdvancedInitializationSettings() {
    this->UseHardwareCodecLowLatencyMode = false;
    this->bVorbisHwAcceleration = false;
    this->bEnable3DAudioSync = false;
    this->uNumOperationsForHwMixing = 0;
    this->bPlotQueueLevel = false;
    this->NumAudioOut2Ports = 0;
    this->NumAudioOut2ObjectPorts = 0;
}

