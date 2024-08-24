#pragma once
#include "CoreMinimal.h"
#include "InputMappingContextLevelInfoType.generated.h"

UENUM(BlueprintType)
enum class InputMappingContextLevelInfoType : uint8 {
    None,
    OnlyAppliedToLevels,
    NotAppliedToLevels,
};

