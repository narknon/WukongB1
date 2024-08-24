#pragma once
#include "CoreMinimal.h"
#include "EPCGComponentDirtyFlag.generated.h"

UENUM(BlueprintType)
enum class EPCGComponentDirtyFlag : uint8 {
    None,
    Actor,
    Landscape,
    Input = 4,
    Data = 8,
    All = 15,
};

