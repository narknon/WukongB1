#pragma once
#include "CoreMinimal.h"
#include "BuffLayerDispMixType.generated.h"

UENUM(BlueprintType)
enum class BuffLayerDispMixType : uint8 {
    Override,
    Overlay,
    EnumMax,
};

