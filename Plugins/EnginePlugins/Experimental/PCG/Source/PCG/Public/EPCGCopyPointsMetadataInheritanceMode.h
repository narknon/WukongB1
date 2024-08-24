#pragma once
#include "CoreMinimal.h"
#include "EPCGCopyPointsMetadataInheritanceMode.generated.h"

UENUM(BlueprintType)
enum class EPCGCopyPointsMetadataInheritanceMode : uint8 {
    SourceFirst,
    TargetFirst,
    SourceOnly,
    TargetOnly,
    None,
};

