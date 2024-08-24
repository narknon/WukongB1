#pragma once
#include "CoreMinimal.h"
#include "EOnlineActivityOutcomeType.generated.h"

UENUM(BlueprintType)
enum class EOnlineActivityOutcomeType : uint8 {
    Completed,
    Failed,
    Cancelled,
};

