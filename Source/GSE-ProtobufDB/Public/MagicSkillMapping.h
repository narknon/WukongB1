#pragma once
#include "CoreMinimal.h"
#include "MagicSkillMapping.generated.h"

UENUM(BlueprintType)
enum class MagicSkillMapping : uint8 {
    MagicBodyMove,
    MagicRareSkill,
    MagicChangeSkill,
    MagicMonkeyFurSkill,
    MagicRemoteAtk,
    MagicArtifact,
    MagicEliteChange,
    ChangeSpecialAtkMode,
    DrinkBloodBottom,
    MagicMonkeyFurSkillExtend,
};

