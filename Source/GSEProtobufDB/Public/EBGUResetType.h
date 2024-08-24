#pragma once
#include "CoreMinimal.h"
#include "EBGUResetType.generated.h"

UENUM(BlueprintType)
enum class EBGUResetType : uint8 {
    No,
    Destroy,
    Status,
    Spawn,
    StatusWithoutHp,
    None,
    EnumMax,
};

