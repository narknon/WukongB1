#pragma once
#include "CoreMinimal.h"
#include "EAITaskActivationEvent.generated.h"

UENUM(BlueprintType)
enum class EAITaskActivationEvent : uint8 {
    AtOnce,
    BeAttacked,
};

