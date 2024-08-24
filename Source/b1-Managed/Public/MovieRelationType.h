#pragma once
#include "CoreMinimal.h"
#include "MovieRelationType.generated.h"

UENUM(BlueprintType)
enum class MovieRelationType : uint8 {
    None,
    Actor,
    Location,
    Monster,
    ManualLocation,
};

