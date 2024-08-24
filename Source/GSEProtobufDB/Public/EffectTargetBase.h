#pragma once
#include "CoreMinimal.h"
#include "EffectTargetBase.generated.h"

UENUM(BlueprintType)
enum class EffectTargetBase : uint8 {
    Self,
    Target,
    Master,
    RootMaster,
};

