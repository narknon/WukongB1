#include "DLSSSettings.h"

UDLSSSettings::UDLSSSettings() {
    this->bEnableDLSSD3D12 = true;
    this->bEnableDLSSD3D11 = true;
    this->bEnableDLSSVulkan = true;
    this->bEnableDLSSInEditorViewports = true;
    this->bEnableDLSSInPlayInEditorViewports = true;
    this->bShowDLSSSDebugOnScreenMessages = true;
    this->bGenericDLSSBinaryExists = false;
    this->NVIDIANGXApplicationId = 1;
    this->bCustomDLSSBinaryExists = false;
    this->bAllowOTAUpdate = true;
    this->bShowDLSSIncompatiblePluginsToolsWarnings = true;
    this->DLAAPreset = EDLSSPreset::Default;
    this->DLSSQualityPreset = EDLSSPreset::C;
    this->DLSSBalancedPreset = EDLSSPreset::C;
    this->DLSSPerformancePreset = EDLSSPreset::C;
    this->DLSSUltraPerformancePreset = EDLSSPreset::Default;
}


