#pragma once
#include "CoreMinimal.h"
#include "UGSE_BULKDATA_LOCKMODE.generated.h"

UENUM(Meta = (Bitflags))
enum class UGSE_BULKDATA_LOCKMODE : uint8 {
    LOCK_READ_ONLY = 1 << 0,
    LOCK_READ_WRITE = 1 << 1
};
ENUM_CLASS_FLAGS(UGSE_BULKDATA_LOCKMODE);

