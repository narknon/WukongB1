#pragma once
#include "CoreMinimal.h"
#include "EPCGComponentInput.generated.h"

UENUM(BlueprintType)
enum class EPCGComponentInput : uint8 {
    Actor,
    Landscape,
    Other,
};

