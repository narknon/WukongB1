#pragma once
#include "CoreMinimal.h"
#include "EGSBuffLayerCounterType.generated.h"

UENUM(BlueprintType)
enum class EGSBuffLayerCounterType : uint8 {
    ReduceLayer,
    RemoveDirectly,
    EnumMax,
};

