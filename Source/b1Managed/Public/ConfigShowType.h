#pragma once
#include "CoreMinimal.h"
#include "ConfigShowType.generated.h"

UENUM(BlueprintType)
enum class ConfigShowType : uint8 {
    All,
    StandAlone,
    Online,
    GameConsole = 4,
    PC = 8,
    NotStartUp = 16,
    PlotTransMode = 32,
    Host = 64,
    WithArchive = 128,
};

