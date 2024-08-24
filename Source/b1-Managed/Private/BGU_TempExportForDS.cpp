#include "BGU_TempExportForDS.h"

ABGU_TempExportForDS::ABGU_TempExportForDS(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BotLifeTimeState = EBGUBotLifeTimeState::Idle;
    this->BGWTeleportNamedPoint = NULL;
    this->ChildActorComponent = NULL;
    this->BANS_GSTimedParticleEffect = NULL;
    this->BANS_GSEditorHelper = NULL;
    this->GMTeleportPanel = NULL;
    this->BUI_GMInfo_Player = NULL;
    this->BUI_GMInfo_Enemy = NULL;
    this->BGUDebugCircleComponent = NULL;
    this->BGUPlayerCharacterCS = NULL;
    this->BGU_CharacterAI = NULL;
    this->BGU_DebugActor = NULL;
    this->BGUBulletBaseManaged = NULL;
    this->BUAnimHumanoidCS_SpecialMove = NULL;
    this->BUAnimHumanoidCS_Move = NULL;
    this->BUAnimHumanoidCS_Simple4Dir = NULL;
    this->BUAnimHumanoidCS_PlayerLocomotion = NULL;
    this->BUAnimHumanoidCS_MotionMatching = NULL;
    this->BUAnimHumanoidCS_MonsterLocomotion = NULL;
    this->BUAnimHumanoidCS_MMRetarget = NULL;
    this->BUAnimHumanoidCS_FlyControl = NULL;
    this->BGWDataAsset_BeAttackedHitLevelConfig = NULL;
    this->BGWDataAsset_ProjectileSpawnConfig = NULL;
    this->BGWDataAsset_ScaleTimeSetting = NULL;
    this->BGWDataAsset_BuffSetCurveValueToMeshConfig = NULL;
    this->BED_ComboAsset = NULL;
    this->BED_BehaviorAsset = NULL;
    this->BGWDataAsset_StateLib = NULL;
    this->BED_ComboNode_Reroute = NULL;
    this->BED_ComboNode_Start = NULL;
    this->BED_BehaviorNode_Start = NULL;
    this->BGWBeAtkPhysAnimDataAsset = NULL;
    this->BGP_PlayerStateB1 = NULL;
    this->BED_StateNode_Reroute = NULL;
    this->BED_StateNode_Initial = NULL;
    this->BGP_PlayerControllerB1 = NULL;
    this->BPS_PlayerControllerDataCompB1 = NULL;
    this->BUS_AttackFeedbackComp = NULL;
    this->BUI_Button = NULL;
    this->BUS_MovePhysicsTransformCompImpl = NULL;
    this->BUS_SkillSequenceComp = NULL;
    this->BUS_PlayerCameraSystem = NULL;
    this->BGWDataAsset_SweepCheckDebugCollisionInfoConfig = NULL;
    this->BUS_PlayerCameraCompUObj = NULL;
    this->BANS_GSNvFlow = NULL;
    this->BANS_GSTrail = NULL;
    this->BGWDataAsset_PerformerConfig = NULL;
    this->DispLibDispWorld = NULL;
    this->BGUPerformerActor = NULL;
    this->BED_QuestNode_Start = NULL;
    this->CLSManager = NULL;
    this->BED_BehaviorNode_GameDataCounter = NULL;
    this->BGURebirthPointBase = NULL;
    this->B1X2_DispWorld = NULL;
    this->BUAnimShadowInstanceBase = NULL;
    this->RebirthType = RebirthType::RebirthPoint;
    this->MoveDirectionFive = MoveDirectionFive::None;
    this->MoveDirection = MoveDirection::None;
}

void ABGU_TempExportForDS::ReceiveBeginPlay_Implementation() {
}


