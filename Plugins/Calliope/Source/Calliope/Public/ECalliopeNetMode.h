#pragma once
#include "CoreMinimal.h"
#include "ECalliopeNetMode.generated.h"

UENUM(BlueprintType)
enum class ECalliopeNetMode : uint8 {
    Any,
    Authority,
    ClientOnly,
    ServerOnly,
    SinglePlayerOnly,
};

