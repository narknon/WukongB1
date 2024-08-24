#pragma once
#include "CoreMinimal.h"
#include "EWwiseGroupType.generated.h"

UENUM(BlueprintType)
enum class EWwiseGroupType : uint8 {
    Switch,
    State,
    Unknown = 255,
};

