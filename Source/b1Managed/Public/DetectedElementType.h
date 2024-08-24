#pragma once
#include "CoreMinimal.h"
#include "DetectedElementType.generated.h"

UENUM(BlueprintType)
enum class DetectedElementType : uint8 {
    None,
    SimpleState,
    UnitState,
    HasBuff,
    UnitAttr,
    UnitActived,
    UnitInActived,
    AbnormalState,
    FsmState,
    SkillCoolDown,
    DistanceFromTarget,
    SkillCanCast,
    CustomFsmState,
    LastBeAttackedStiffLevel,
    DistanceFromMaster,
    ActorYawRotation,
    GlobalCastSkillCount,
    DurCastSkill,
    CurrentBeAttackedStiffLevel,
    CurSkillCostDmgNum,
    SocketUnitsDead,
    DistanceFromNearestPlayer,
    SpecifyResIdUnitsDead,
    FamilySpecifyUnitAttr,
    Random,
    FamilyUnitAliveNum,
    TargetInAngleRange,
    CompareBuffLayer,
    CompareGamePlusCount,
    CheckSurfaceType,
    HasStoryCanTalkInThisLevel,
    StoryInCollingOffPeriod,
    PlayerLeisureOverTime,
};

