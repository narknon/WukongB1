#include "GSE_GSGameSettingsFuncLib.h"

UGSE_GSGameSettingsFuncLib::UGSE_GSGameSettingsFuncLib() {
}

void UGSE_GSGameSettingsFuncLib::SetXeSSPercentage(float Percentage) {
}

void UGSE_GSGameSettingsFuncLib::SetRayTracingQuality(int32 RTXLevel) {
}

bool UGSE_GSGameSettingsFuncLib::IsLowFeatureLevelGPU() {
    return false;
}

FString UGSE_GSGameSettingsFuncLib::GetRHIAdapterName() {
    return TEXT("");
}

FString UGSE_GSGameSettingsFuncLib::GetMainMonitorID() {
    return TEXT("");
}

bool UGSE_GSGameSettingsFuncLib::GetIsHDRViewport(UWorld* World) {
    return false;
}

bool UGSE_GSGameSettingsFuncLib::GetGRHISupportsRayTracing() {
    return false;
}

FString UGSE_GSGameSettingsFuncLib::GetDefaultLanguage() {
    return TEXT("");
}

int32 UGSE_GSGameSettingsFuncLib::GetCurGameMainScreen() {
    return 0;
}

void UGSE_GSGameSettingsFuncLib::ApplyGSGameSettings(bool bSaveSettings) {
}

void UGSE_GSGameSettingsFuncLib::ApplyGSGameResolutionSettings(bool bSaveSettings) {
}


