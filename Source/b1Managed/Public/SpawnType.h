#pragma once
#include "CoreMinimal.h"
#include "SpawnType.generated.h"

UENUM(BlueprintType)
enum class SpawnType : uint8 {
    Weapon,
    Character,
};

