#pragma once
#include "CoreMinimal.h"
#include "TargetSourceType.generated.h"

UENUM(BlueprintType)
enum class TargetSourceType : uint8 {
    None,
    CameraLockUpdate,
    SwitchTarget_TransUnit,
    SwitchTarget_PhantomRush,
    Target_AIPerception,
    Target_ByTaunter,
    Target_ByHatred,
    Target_AwakePartner,
    Target_SelectByEQS,
    Target_CQGAssignTarget,
    Target_SeqAssignTarget,
    Target_SwitchTaget,
    Target_RangeSearch,
    Target_AutoTest,
    Target_CPGAssignTarget,
    Target_CMGAssignTarget,
    Target_BattleTriggerBoxAssignTarget,
    Target_ForceFightAssignTarget,
    Target_ActionBoxAssignTarget,
    Target_TeamBoxAssignTarget,
    Target_AnimSyncAssignTarget,
    Target_AssociaAssignTarget,
    Target_BirthCatchPlayer,
    Target_BirthCatchMasterTarget,
    Target_BirthCatchSummonerTarget,
    Target_AssignPlayerAsTarget,
    Target_MonsterTransAssignTarget,
    Target_BeAttackedAssignAttackerAsTarget,
    Target_SummonAssignMasterTarget,
    Target_FindByPlayerLockTarget,
    Target_FindByHostileToPlayer,
    Target_FindByMasterLock,
    Target_FamilyAssignTarget,
    Target_MagicFieldSetOverlapActorAsMasterTarget,
    Target_ForceCameraLock,
    Target_AIStrongPerception,
    AO_AORangeFind,
    AO_SetByTarget,
    Combo_NormalUse,
    Combo_Update,
    SkillBase_NormalUse,
    SkillBase_SetByCombo,
    SkillBase_SetByAI,
    Target_AutoMoveTo,
};

