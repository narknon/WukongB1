#pragma once
#include "CoreMinimal.h"
#include "EPCGSpawnActorOption.generated.h"

UENUM(BlueprintType)
enum class EPCGSpawnActorOption : uint8 {
    CollapseActors,
    MergePCGOnly,
    NoMerging,
};

