#pragma once
#include "CoreMinimal.h"
#include "InterActMappingCondition.generated.h"

UENUM(BlueprintType)
enum class InterActMappingCondition : uint8 {
    Default,
    TaskGroup,
    Loop,
    DistanceToMachingPoint,
    FunctionEnable,
    MatchHeight,
    HasItem,
    SeedSubmitted,
    EnumMax,
};

