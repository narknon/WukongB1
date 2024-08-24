#pragma once
#include "CoreMinimal.h"
#include "EPCGMeshSelectorMaterialOverrideMode.generated.h"

UENUM(BlueprintType)
enum class EPCGMeshSelectorMaterialOverrideMode : uint8 {
    NoOverride,
    StaticOverride,
    ByAttributeOverride,
};

