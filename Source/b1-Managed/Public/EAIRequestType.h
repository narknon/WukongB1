#pragma once
#include "CoreMinimal.h"
#include "EAIRequestType.generated.h"

UENUM(BlueprintType)
enum class EAIRequestType : uint8 {
    MoveToLoc,
    MoveToActor,
    DirDamage,
    MoveSkill,
};

