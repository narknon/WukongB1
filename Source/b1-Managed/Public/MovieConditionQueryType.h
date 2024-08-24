#pragma once
#include "CoreMinimal.h"
#include "MovieConditionQueryType.generated.h"

UENUM(BlueprintType)
enum class MovieConditionQueryType : uint8 {
    AllLevelSwitchStateFinish,
    GroupUnitBirthFinish,
};

