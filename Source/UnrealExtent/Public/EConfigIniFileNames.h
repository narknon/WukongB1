#pragma once
#include "CoreMinimal.h"
#include "EConfigIniFileNames.generated.h"

UENUM(BlueprintType)
enum class EConfigIniFileNames : uint8 {
    GEngineIni,
    GGameIni,
    GGameUserSettingsIni,
    GEditorIni,
    GEditorKeyBindingsIni,
    GEditorLayoutIni,
    GEditorSettingsIni,
    GEditorPerProjectIni,
    GCompatIni,
    GLightmassIni,
    GScalabilityIni,
    GHardwareIni,
    GInputIni,
    GRuntimeOptionsIni,
    GInstallBundleIni,
    GDeviceProfilesIni,
    GSGameVersionIni,
};

