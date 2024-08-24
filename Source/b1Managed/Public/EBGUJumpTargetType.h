#pragma once
#include "CoreMinimal.h"
#include "EBGUJumpTargetType.generated.h"

UENUM(BlueprintType)
enum class EBGUJumpTargetType : uint8 {
    CurrentTarget,
    SceneItem,
};

