#pragma once
#include "CoreMinimal.h"
#include "EAMScaleType.generated.h"

UENUM(BlueprintType)
enum class EAMScaleType : uint8 {
    ScaleForTarget,
    ScaleForSceneItem,
    ScaleForCachedPoint,
    UsePureScale,
    UseSkillBaseTarget,
};

