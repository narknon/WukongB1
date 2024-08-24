#pragma once
#include "CoreMinimal.h"
#include "SpellTargetBaseType.generated.h"

UENUM(BlueprintType)
enum class SpellTargetBaseType : uint8 {
    None,
    Victim,
    Caster,
    Attacker,
};

