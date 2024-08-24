#pragma once
#include "CoreMinimal.h"
#include "EPCGMetadataSettingsBaseTypes.generated.h"

UENUM(BlueprintType)
enum class EPCGMetadataSettingsBaseTypes : uint8 {
    AutoUpcastTypes,
    StrictTypes,
};

