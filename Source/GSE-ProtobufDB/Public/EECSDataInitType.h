#pragma once
#include "CoreMinimal.h"
#include "EECSDataInitType.generated.h"

UENUM(BlueprintType)
enum class EECSDataInitType : uint8 {
    PlayerAttr,
    PlayerBirthPoint,
    MonsterAttr,
};

