#pragma once
#include "CoreMinimal.h"
#include "AnimMode.generated.h"

UENUM(BlueprintType)
enum class AnimMode : uint8 {
    DefaultAnim,
    PatrolAnim,
    EQSRunAnim,
    ShieldAnim,
    PowerStorageAnim,
};

