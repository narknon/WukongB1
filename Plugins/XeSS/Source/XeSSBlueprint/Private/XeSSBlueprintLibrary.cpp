#include "XeSSBlueprintLibrary.h"

UXeSSBlueprintLibrary::UXeSSBlueprintLibrary() {
}

void UXeSSBlueprintLibrary::SetXeSSQualityMode(EXeSSQualityMode QualityMode) {
}

bool UXeSSBlueprintLibrary::SetXeSSPercentage(float Percentage) {
    return false;
}

bool UXeSSBlueprintLibrary::IsXeSSSupported() {
    return false;
}

bool UXeSSBlueprintLibrary::GetXeSSQualityModeInformation(EXeSSQualityMode QualityMode, float& ScreenPercentage) {
    return false;
}

EXeSSQualityMode UXeSSBlueprintLibrary::GetXeSSQualityMode() {
    return EXeSSQualityMode::Off;
}

TArray<EXeSSQualityMode> UXeSSBlueprintLibrary::GetSupportedXeSSQualityModes() {
    return TArray<EXeSSQualityMode>();
}

float UXeSSBlueprintLibrary::GetSupportedXeSSMinResolutionPercentage() {
    return 0.0f;
}

float UXeSSBlueprintLibrary::GetSupportedXeSSMaxResolutionPercentage() {
    return 0.0f;
}

EXeSSQualityMode UXeSSBlueprintLibrary::GetDefaultXeSSQualityMode(FIntPoint ScreenResolution) {
    return EXeSSQualityMode::Off;
}


