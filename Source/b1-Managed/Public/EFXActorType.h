#pragma once
#include "CoreMinimal.h"
#include "EFXActorType.generated.h"

UENUM(BlueprintType)
enum class EFXActorType : uint8 {
    None,
    DestructibleObject,
    NonPreTracingDestructibleObject,
};

