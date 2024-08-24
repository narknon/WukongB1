#pragma once
#include "CoreMinimal.h"
#include "EPCGTextureColorChannel.generated.h"

UENUM(BlueprintType)
enum class EPCGTextureColorChannel : uint8 {
    Red,
    Green,
    Blue,
    Alpha,
};

