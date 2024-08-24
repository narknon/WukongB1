#pragma once
#include "CoreMinimal.h"
#include "EBGUBloodBarType.generated.h"

UENUM(BlueprintType)
enum class EBGUBloodBarType : uint8 {
    None,
    BossBar,
    EnemyBar,
    EliteBar,
    PlayerBar,
    EnumMax,
};

