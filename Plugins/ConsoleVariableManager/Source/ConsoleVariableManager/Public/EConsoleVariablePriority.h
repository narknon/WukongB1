#pragma once
#include "CoreMinimal.h"
#include "EConsoleVariablePriority.generated.h"

UENUM(BlueprintType)
enum class EConsoleVariablePriority : uint8 {
    None,
    Original,
    SetByCode,
    GameSettings = 10,
    CLSVolume = 20,
    SceneVolume = 30,
    Vfx = 40,
    UI = 50,
    Default = 100,
};

