#pragma once
#include "CoreMinimal.h"
#include "UnitTagType.generated.h"

UENUM(BlueprintType)
enum class UnitTagType : uint8 {
    NormalMonster,
    SmallMonster,
    Boss,
    ClonedWukong,
    Wukong,
    TransitionPlayer,
    JSDS,
    YangJian,
};

