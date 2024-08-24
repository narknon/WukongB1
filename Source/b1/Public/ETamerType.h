#pragma once
#include "CoreMinimal.h"
#include "ETamerType.generated.h"

UENUM()
enum class ETamerType : int32 {
    None,
    LevelLoaded,
    Spawned,
    Summoned,
};

