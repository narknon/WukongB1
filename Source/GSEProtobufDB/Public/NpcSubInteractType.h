#pragma once
#include "CoreMinimal.h"
#include "NpcSubInteractType.generated.h"

UENUM(BlueprintType)
enum class NpcSubInteractType : uint8 {
    None,
    NpcSkill,
    PlayerSkill,
    ComplexSkill,
    Seq,
    Dialogue,
    NpcMontage,
    PlayerMontage,
    ComplexMontage,
    EnumMax,
};

