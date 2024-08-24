#pragma once
#include "CoreMinimal.h"
#include "EWwiseLanguageRequirement.generated.h"

UENUM(BlueprintType)
enum class EWwiseLanguageRequirement : uint8 {
    IsDefault,
    IsOptional,
    SFX,
};

