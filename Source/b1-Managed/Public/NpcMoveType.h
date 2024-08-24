#pragma once
#include "CoreMinimal.h"
#include "NpcMoveType.generated.h"

UENUM(BlueprintType)
enum class NpcMoveType : uint8 {
    Navigation,
    Spline,
};

