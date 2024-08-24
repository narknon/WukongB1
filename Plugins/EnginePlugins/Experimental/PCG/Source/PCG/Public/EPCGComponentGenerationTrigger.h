#pragma once
#include "CoreMinimal.h"
#include "EPCGComponentGenerationTrigger.generated.h"

UENUM(BlueprintType)
enum class EPCGComponentGenerationTrigger : uint8 {
    GenerateOnLoad,
    GenerateOnDemand,
};

