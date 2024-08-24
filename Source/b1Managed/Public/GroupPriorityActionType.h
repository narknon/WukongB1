#pragma once
#include "CoreMinimal.h"
#include "GroupPriorityActionType.generated.h"

UENUM(BlueprintType)
enum class GroupPriorityActionType : uint8 {
    MoveToPos,
    CastSkill,
    AddBuff,
    EnumMax = 255,
};

