#pragma once
#include "CoreMinimal.h"
#include "SkillBaseTarget.generated.h"

UENUM(BlueprintType)
enum class SkillBaseTarget : uint8 {
    NoneOrCurrenttarget,
    Self,
    Master,
    NearlySpecialUnitByResid,
    Player,
    SceneItem,
    EQS,
    MasterTarget,
};

