#pragma once
#include "CoreMinimal.h"
#include "ConditionalRelation.generated.h"

UENUM(BlueprintType)
enum class ConditionalRelation : uint8 {
    And,
    Or,
};

