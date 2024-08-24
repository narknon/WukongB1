#pragma once
#include "CoreMinimal.h"
#include "EPCGSettingsType.generated.h"

UENUM(BlueprintType)
enum class EPCGSettingsType : uint8 {
    InputOutput,
    Spatial,
    Density,
    Blueprint,
    Metadata,
    Filter,
    Sampler,
    Spawner,
    Subgraph,
    Debug,
    Generic,
    Param,
    HierarchicalGeneration,
    ControlFlow,
};

