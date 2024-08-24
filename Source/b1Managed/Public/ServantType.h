#pragma once
#include "CoreMinimal.h"
#include "ServantType.generated.h"

UENUM(BlueprintType)
enum class ServantType : uint8 {
    None,
    Normal,
    Dummy,
    Clone,
    PhantomRush,
    MonsterSpawn,
    NeutralAnimSpawn,
};

