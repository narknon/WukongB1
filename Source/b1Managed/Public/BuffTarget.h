#pragma once
#include "CoreMinimal.h"
#include "BuffTarget.generated.h"

UENUM(BlueprintType)
enum class BuffTarget : uint8 {
    Player,
    OtherUnit,
    SceneUnit,
};

