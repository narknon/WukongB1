#pragma once
#include "CoreMinimal.h"
#include "GroupPatrolType.generated.h"

UENUM(BlueprintType)
enum class GroupPatrolType : uint8 {
    None,
    Leader,
    Member,
};

