#pragma once
#include "CoreMinimal.h"
#include "EPCGAttributeAccessorFlags.generated.h"

UENUM(Meta = (Bitflags))
enum class EPCGAttributeAccessorFlags
{	
    // Always require that the underlying type of the accessor match the expected type, 1 for 1.
    StrictType = 1 << 0,

    // Allow to broadcast the expected type to the underlying type (or vice versa, depending on the operation)
    AllowBroadcast = 1 << 1,

    // Allow to construct the expected type from the underlying type (or vice versa, depending on the operation)
    AllowConstructible = 1 << 2,

    // By default, if the key is a PCGInvalidEntryKey, it will add a new entry. With this set, it will override the default value.
    // USE WITH CAUTION
    AllowSetDefaultValue = 1 << 3
};
ENUM_CLASS_FLAGS(EPCGAttributeAccessorFlags);

