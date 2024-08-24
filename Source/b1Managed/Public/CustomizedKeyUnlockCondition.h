#pragma once
#include "CoreMinimal.h"
#include "CustomizedKeyUnlockCondition.generated.h"

UENUM(BlueprintType)
enum class CustomizedKeyUnlockCondition : uint8 {
    AlwaysShow,
    MagicArtifact,
    VigorSkill,
    Cloud,
    PropStance,
    PokeStance,
};

