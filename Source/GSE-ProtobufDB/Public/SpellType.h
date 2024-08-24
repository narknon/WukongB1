#pragma once
#include "CoreMinimal.h"
#include "SpellType.generated.h"

UENUM(BlueprintType)
enum class SpellType : uint8 {
    Min,
    ShenFa,
    HaoMao,
    QiShu,
    BianShen,
    TiShu,
    QingGun,
    ZhongGun,
    YuGun,
    Ride,
    Base,
    Advanced,
    EnumMax,
};

