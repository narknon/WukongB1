#pragma once
#include "CoreMinimal.h"
#include "EPCGActorSelection.generated.h"

UENUM(BlueprintType)
enum class EPCGActorSelection : uint8 {
    ByTag,
    ByName,
    ByClass,
    Unknown,
};

