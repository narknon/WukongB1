#pragma once
#include "CoreMinimal.h"
#include "EAIBasicActionType.generated.h"

UENUM(BlueprintType)
enum class EAIBasicActionType : uint8 {
    DirectionMove,
    DirectionDamage,
    RootMotionMove,
    TraceMove,
    MoveSkill,
};

