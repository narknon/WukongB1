#pragma once
#include "CoreMinimal.h"
#include "ChildActorActionType.generated.h"

UENUM(BlueprintType)
enum class ChildActorActionType : uint8 {
    CastSkill,
    AddBuff,
    RemoveBuff,
    SpawnSocketAttachTamer,
};

