#pragma once
#include "CoreMinimal.h"
#include "EBSelectTargetRangeType.generated.h"

UENUM(BlueprintType)
enum class EBSelectTargetRangeType : uint8 {
    None,
    CameraLock,
    MeeleAttack,
    EnumMax,
};

