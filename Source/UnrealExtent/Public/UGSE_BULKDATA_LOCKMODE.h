#pragma once
#include "CoreMinimal.h"
#include "UGSE_BULKDATA_LOCKMODE.generated.h"

UENUM(BlueprintType)
enum class UGSE_BULKDATA_LOCKMODE : uint8 {
    LOCK_READ_ONLY = 1,
    LOCK_READ_WRITE,
};

