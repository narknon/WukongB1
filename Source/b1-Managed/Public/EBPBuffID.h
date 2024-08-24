#pragma once
#include "CoreMinimal.h"
#include "EBPBuffID.generated.h"

UENUM(BlueprintType)
enum class EBPBuffID : uint8 {
    NoneBuff,
    SmallStunBuff = 200,
    BigStunBuff,
    SkillCastingBuff,
    ShieldDefenceBuff,
    SpawnDoingBuff = 206,
    TianjiangEnterAIStage2 = 208,
    FightBackBuff,
    ImmueStiffBuff,
    SuperImmueStiffBuff,
    InvincibleBuff,
    ImmueDamage,
    DemoChangeCharacter = 216,
    DemoFTXDInvincibleBuff = 218,
    DemoTianJiangInterQTEBuff,
    EnumMax = 255,
};

