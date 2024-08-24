#pragma once
#include "CoreMinimal.h"
#include "EPCGMetadataFilterMode.generated.h"

UENUM(BlueprintType)
enum class EPCGMetadataFilterMode : uint8 {
    ExcludeAttributes,
    IncludeAttributes,
};

