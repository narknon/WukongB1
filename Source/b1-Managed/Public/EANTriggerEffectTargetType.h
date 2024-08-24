#pragma once
#include "CoreMinimal.h"
#include "EANTriggerEffectTargetType.generated.h"

UENUM(BlueprintType)
enum class EANTriggerEffectTargetType : uint8 {
    Owner,
    Master,
    LastAttacker,
};

