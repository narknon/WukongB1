#pragma once
#include "CoreMinimal.h"
#include "RoleDataType.generated.h"

UENUM(BlueprintType)
enum class RoleDataType : uint8 {
    None,
    ConsumedItem,
    OwningItem,
    InteractionRecord,
    TaskStage,
    OwningHulu,
    Collection,
};

