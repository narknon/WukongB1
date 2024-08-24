#pragma once
#include "CoreMinimal.h"
#include "EIDType_Outlaw.generated.h"

UENUM(BlueprintType)
enum class EIDType_Outlaw : uint8 {
    Projectile,
    SkillEffect,
    Buff,
    Summon,
};

