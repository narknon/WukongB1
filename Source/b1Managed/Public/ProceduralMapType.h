#pragma once
#include "CoreMinimal.h"
#include "ProceduralMapType.generated.h"

UENUM(BlueprintType)
enum class ProceduralMapType : uint8 {
    PROCEDURAL_DUNGEON,
    PROCEDURAL_WILDERNESS_LINEAR,
    PROCEDURAL_DEMO_MAP,
};

