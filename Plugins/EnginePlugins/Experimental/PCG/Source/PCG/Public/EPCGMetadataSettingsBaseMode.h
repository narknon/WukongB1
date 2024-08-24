#pragma once
#include "CoreMinimal.h"
#include "EPCGMetadataSettingsBaseMode.generated.h"

UENUM(BlueprintType)
enum class EPCGMetadataSettingsBaseMode : uint8 {
    Inferred,
    NoBroadcast,
    Broadcast,
};

