#pragma once
#include "CoreMinimal.h"
#include "PerformerParamType.generated.h"

UENUM(BlueprintType)
enum class PerformerParamType : uint8 {
    None,
    Overlap,
    Performer,
};

