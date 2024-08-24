#pragma once
#include "CoreMinimal.h"
#include "EPCGCreateSplineMode.generated.h"

UENUM(BlueprintType)
enum class EPCGCreateSplineMode : uint8 {
    CreateDataOnly,
    CreateComponent,
    CreateNewActor,
};

