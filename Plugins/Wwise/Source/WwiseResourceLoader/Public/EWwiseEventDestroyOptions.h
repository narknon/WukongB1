#pragma once
#include "CoreMinimal.h"
#include "EWwiseEventDestroyOptions.generated.h"

UENUM(BlueprintType)
enum class EWwiseEventDestroyOptions : uint8 {
    StopEventOnDestroy,
    WaitForEventEnd,
};

