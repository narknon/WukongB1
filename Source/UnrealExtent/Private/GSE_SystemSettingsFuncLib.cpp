#include "GSE_SystemSettingsFuncLib.h"

UGSE_SystemSettingsFuncLib::UGSE_SystemSettingsFuncLib() {
}

void UGSE_SystemSettingsFuncLib::SetVSyncEnabled(bool bEnableVSync) {
}

void UGSE_SystemSettingsFuncLib::SetViewDistanceQuality(EScalabilityQuality InViewDistanceQuality) {
}

void UGSE_SystemSettingsFuncLib::SetTextureQuality(EScalabilityQuality InTextureQuality) {
}

void UGSE_SystemSettingsFuncLib::SetTargetScreenModeV2(TEnumAsByte<EWindowMode::Type> TargetWindowMode) {
}

void UGSE_SystemSettingsFuncLib::SetTargetScreenMode(EGSScreenMode TargetScreenMode) {
}

void UGSE_SystemSettingsFuncLib::SetTargetResolution(FIntPoint TargetResolution, bool NeedFresh) {
}

void UGSE_SystemSettingsFuncLib::SetShadowQuality(EScalabilityQuality InShadowQuality) {
}

void UGSE_SystemSettingsFuncLib::SetShadingQuality(EScalabilityQuality InShadingQuality) {
}

void UGSE_SystemSettingsFuncLib::SetScreenPos(FVector2D position) {
}

void UGSE_SystemSettingsFuncLib::SetScalabilityQuality(EScalabilityQuality TargetGSQualityLevel) {
}

void UGSE_SystemSettingsFuncLib::SetScalabilityQualities(FGSScalabilityQualities Qualities) {
}

void UGSE_SystemSettingsFuncLib::SetResolutionQualityScale(float InResolutionQualityScale) {
}

void UGSE_SystemSettingsFuncLib::SetResolutionQualityLevel(EScalabilityQuality InResolutionQualityLevel) {
}

void UGSE_SystemSettingsFuncLib::SetReflectionQuality(EScalabilityQuality InReflectionQuality) {
}

void UGSE_SystemSettingsFuncLib::SetPriorityMode(EGSPriorityMode InPriorityMode) {
}

void UGSE_SystemSettingsFuncLib::SetPostProcessQuality(EScalabilityQuality InPostProcessQuality) {
}

void UGSE_SystemSettingsFuncLib::SetMonitorAsPrimaryV2(const FString& InMonitorID) {
}

void UGSE_SystemSettingsFuncLib::SetMonitorAsPrimary(const FString& MonitorID) {
}

void UGSE_SystemSettingsFuncLib::SetGlobalIlluminationQuality(EScalabilityQuality InGIQuality) {
}

void UGSE_SystemSettingsFuncLib::SetFrameRateLimit(float InFrameRateLimit) {
}

void UGSE_SystemSettingsFuncLib::SetFoliageQuality(EScalabilityQuality InFoliageQuality) {
}

void UGSE_SystemSettingsFuncLib::SetEffectsQuality(EScalabilityQuality InEffectQuality) {
}

void UGSE_SystemSettingsFuncLib::SetAntiAliasingQuality(EScalabilityQuality InAntiAliasingQuality) {
}

void UGSE_SystemSettingsFuncLib::RefreshBenchmarkMonitor() {
}

void UGSE_SystemSettingsFuncLib::OnViewportResizedEvent(FIntPoint NewSize) {
}

void UGSE_SystemSettingsFuncLib::OnMonitorAsPrimaryChange(int32 TargetPrimaryMonitorIndex) {
}

void UGSE_SystemSettingsFuncLib::Init() {
}

void UGSE_SystemSettingsFuncLib::GMChangeMonitorAsPrimary(int32 MonitorIdx) {
}

bool UGSE_SystemSettingsFuncLib::GetVSyncEnabled() {
    return false;
}

float UGSE_SystemSettingsFuncLib::GetUsedGraphicsMemory(EGSGraphicsMemoryMode InQueryType) {
    return 0.0f;
}

FVector2D UGSE_SystemSettingsFuncLib::GetScreenSize() {
    return FVector2D{};
}

float UGSE_SystemSettingsFuncLib::GetResolutionScaleFromQualityLevel(EScalabilityQuality InQualityLevel) {
    return 0.0f;
}

FGSScalabilityQualities UGSE_SystemSettingsFuncLib::GetRecommendedScalabilityQuality(bool bLogInfo) {
    return FGSScalabilityQualities{};
}

TArray<FIntPoint> UGSE_SystemSettingsFuncLib::GetProportionalResolutions(FIntPoint AspectRatio) {
    return TArray<FIntPoint>();
}

FIntPoint UGSE_SystemSettingsFuncLib::GetGSystemResolution() {
    return FIntPoint{};
}

int32 UGSE_SystemSettingsFuncLib::GetGraphicsMemoryInfo(EGSGraphicsMemoryMode InGraphicsMemoryMode) {
    return 0;
}

float UGSE_SystemSettingsFuncLib::GetGPUUsedTime() {
    return 0.0f;
}

int32 UGSE_SystemSettingsFuncLib::GetGPUUsedPercentage() {
    return 0;
}

float UGSE_SystemSettingsFuncLib::GetFrameRateLimit() {
    return 0.0f;
}

TEnumAsByte<EWindowMode::Type> UGSE_SystemSettingsFuncLib::GetCurrentScreenModeV2() {
    return EWindowMode::Fullscreen;
}

EGSScreenMode UGSE_SystemSettingsFuncLib::GetCurrentScreenMode() {
    return EGSScreenMode::FULL_SCREEN;
}

FGSScalabilityQualities UGSE_SystemSettingsFuncLib::GetCurrentScalabilityQuality(bool bLogInfo) {
    return FGSScalabilityQualities{};
}

FGSScalabilityQualities UGSE_SystemSettingsFuncLib::GetCurrentScalabilityQualities(bool bLogInfo) {
    return FGSScalabilityQualities{};
}

FIntPoint UGSE_SystemSettingsFuncLib::GetCurrentResolution() {
    return FIntPoint{};
}

float UGSE_SystemSettingsFuncLib::GetCurrentFPS() {
    return 0.0f;
}

float UGSE_SystemSettingsFuncLib::GetCPUUsedTime() {
    return 0.0f;
}

int32 UGSE_SystemSettingsFuncLib::GetCPUUsedPercentage() {
    return 0;
}

TArray<FIntPoint> UGSE_SystemSettingsFuncLib::GetAvailableResolutionsByMonitorID(int32 InMonitorID) {
    return TArray<FIntPoint>();
}

TArray<FIntPoint> UGSE_SystemSettingsFuncLib::GetAvailableResolutions() {
    return TArray<FIntPoint>();
}

float UGSE_SystemSettingsFuncLib::GetAvailableGraphicsMemory(EGSGraphicsMemoryMode InQueryType) {
    return 0.0f;
}

TArray<FGSMonitorInfo> UGSE_SystemSettingsFuncLib::GetAllMonitorInfo() {
    return TArray<FGSMonitorInfo>();
}

FString UGSE_SystemSettingsFuncLib::EngineSettingGetString(const FString& Section, const FString& Key) {
    return TEXT("");
}

void UGSE_SystemSettingsFuncLib::BGUUnBindOnViewportResizedEvent(UObject* Obj, FName FuncName) {
}

void UGSE_SystemSettingsFuncLib::BGUUnBindOnMonitorAsPrimaryChange(UObject* Obj, FName FuncName) {
}

void UGSE_SystemSettingsFuncLib::BGUUnBindOnCultureChangedEvent(UObject* Obj, FName FuncName) {
}

void UGSE_SystemSettingsFuncLib::BGUBindOnViewportResizedEvent(UObject* Obj, FName FuncName) {
}

void UGSE_SystemSettingsFuncLib::BGUBindOnMonitorAsPrimaryChange(UObject* Obj, FName FuncName) {
}

void UGSE_SystemSettingsFuncLib::BGUBindOnCultureChangedEvent(UObject* Obj, FName FuncName) {
}

void UGSE_SystemSettingsFuncLib::ApplySystemSettings(bool bSaveSettings) {
}


