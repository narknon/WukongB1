#pragma once
#include "CoreMinimal.h"
#include "SummonType.generated.h"

UENUM(BlueprintType)
enum class SummonType : uint8 {
    Normal,
    PhantomRush,
    Hatch,
    MonsterSpawn,
    NeutralAnimSpawn,
};

