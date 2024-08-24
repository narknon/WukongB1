#pragma once
#include "CoreMinimal.h"
#include "ConditionRelationType.generated.h"

UENUM(BlueprintType)
enum class ConditionRelationType : uint8 {
    LogicRelationAnd,
    LogicRelationOr,
};

