#pragma once
#include "CoreMinimal.h"
#include "EBUTargetFilter.generated.h"

UENUM(BlueprintType)
enum class EBUTargetFilter : uint8 {
    Default,
    MySelf,
    TeamMate,
    Enemy = 4,
};

