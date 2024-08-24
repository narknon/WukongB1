#pragma once
#include "CoreMinimal.h"
#include "MagicFieldEffectTriggerEvent.generated.h"

UENUM(BlueprintType)
enum class MagicFieldEffectTriggerEvent : uint8 {
    OnBorn,
    OnDead,
    OnEnter,
    OnExit,
};

