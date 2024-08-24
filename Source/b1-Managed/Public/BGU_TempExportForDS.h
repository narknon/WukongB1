#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EBGUBotLifeTimeState.h"
#include "EffectInstReq.h"
#include "IKRigBoneDefinition.h"
#include "MoveDirection.h"
#include "MoveDirectionFive.h"
#include "RebirthType.h"
#include "Templates/SubclassOf.h"
#include "BGU_TempExportForDS.generated.h"

class AB1X2_DispWorld;
class ABGP_PlayerControllerB1;
class ABGP_PlayerStateB1;
class ABGUBulletBaseManaged;
class ABGUPerformerActor;
class ABGUPlayerCharacterCS;
class ABGURebirthPointBase;
class ABGU_CharacterAI;
class ABGU_DebugActor;
class ABGWTeleportNamedPoint;
class ACLSManager;
class ADispLibDispWorld;
class UBANS_GSEditorHelper;
class UBANS_GSNvFlow;
class UBANS_GSTimedParticleEffect;
class UBANS_GSTrail;
class UBED_BehaviorAsset;
class UBED_BehaviorNode_GameDataCounter;
class UBED_BehaviorNode_Start;
class UBED_ComboAsset;
class UBED_ComboNode_Reroute;
class UBED_ComboNode_Start;
class UBED_QuestNode_Start;
class UBED_StateNode_Initial;
class UBED_StateNode_Reroute;
class UBGUDebugCircleComponent;
class UBGWBeAtkPhysAnimDataAsset;
class UBGWDataAsset_BeAttackedHitLevelConfig;
class UBGWDataAsset_BuffSetCurveValueToMeshConfig;
class UBGWDataAsset_PerformerConfig;
class UBGWDataAsset_ProjectileSpawnConfig;
class UBGWDataAsset_ScaleTimeSetting;
class UBGWDataAsset_StateLib;
class UBGWDataAsset_SweepCheckDebugCollisionInfoConfig;
class UBPS_PlayerControllerDataCompB1;
class UBUAnimHumanoidCS_FlyControl;
class UBUAnimHumanoidCS_MMRetarget;
class UBUAnimHumanoidCS_MonsterLocomotion;
class UBUAnimHumanoidCS_MotionMatching;
class UBUAnimHumanoidCS_Move;
class UBUAnimHumanoidCS_PlayerLocomotion;
class UBUAnimHumanoidCS_Simple4Dir;
class UBUAnimHumanoidCS_SpecialMove;
class UBUAnimShadowInstanceBase;
class UBUI_Button;
class UBUI_GMInfo_Enemy;
class UBUI_GMInfo_Player;
class UBUI_GMTeleportPanel;
class UBUS_AttackFeedbackComp;
class UBUS_MovePhysicsTransformCompImpl;
class UBUS_PlayerCameraCompUObj;
class UBUS_PlayerCameraSystem;
class UBUS_SkillSequenceComp;
class UChildActorComponent;

UCLASS(Blueprintable)
class ABGU_TempExportForDS : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBGUBotLifeTimeState BotLifeTimeState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABGWTeleportNamedPoint> BGWTeleportNamedPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TSubclassOf<UChildActorComponent> ChildActorComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UBANS_GSTimedParticleEffect> BANS_GSTimedParticleEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UBANS_GSEditorHelper> BANS_GSEditorHelper;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TSubclassOf<UBUI_GMTeleportPanel> GMTeleportPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TSubclassOf<UBUI_GMInfo_Player> BUI_GMInfo_Player;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TSubclassOf<UBUI_GMInfo_Enemy> BUI_GMInfo_Enemy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TSubclassOf<UBGUDebugCircleComponent> BGUDebugCircleComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABGUPlayerCharacterCS> BGUPlayerCharacterCS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABGU_CharacterAI> BGU_CharacterAI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABGU_DebugActor> BGU_DebugActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABGUBulletBaseManaged> BGUBulletBaseManaged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UBUAnimHumanoidCS_SpecialMove> BUAnimHumanoidCS_SpecialMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UBUAnimHumanoidCS_Move> BUAnimHumanoidCS_Move;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UBUAnimHumanoidCS_Simple4Dir> BUAnimHumanoidCS_Simple4Dir;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UBUAnimHumanoidCS_PlayerLocomotion> BUAnimHumanoidCS_PlayerLocomotion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UBUAnimHumanoidCS_MotionMatching> BUAnimHumanoidCS_MotionMatching;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UBUAnimHumanoidCS_MonsterLocomotion> BUAnimHumanoidCS_MonsterLocomotion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UBUAnimHumanoidCS_MMRetarget> BUAnimHumanoidCS_MMRetarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UBUAnimHumanoidCS_FlyControl> BUAnimHumanoidCS_FlyControl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UBGWDataAsset_BeAttackedHitLevelConfig> BGWDataAsset_BeAttackedHitLevelConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UBGWDataAsset_ProjectileSpawnConfig> BGWDataAsset_ProjectileSpawnConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UBGWDataAsset_ScaleTimeSetting> BGWDataAsset_ScaleTimeSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UBGWDataAsset_BuffSetCurveValueToMeshConfig> BGWDataAsset_BuffSetCurveValueToMeshConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UBED_ComboAsset> BED_ComboAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UBED_BehaviorAsset> BED_BehaviorAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UBGWDataAsset_StateLib> BGWDataAsset_StateLib;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UBED_ComboNode_Reroute> BED_ComboNode_Reroute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UBED_ComboNode_Start> BED_ComboNode_Start;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UBED_BehaviorNode_Start> BED_BehaviorNode_Start;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UBGWBeAtkPhysAnimDataAsset> BGWBeAtkPhysAnimDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABGP_PlayerStateB1> BGP_PlayerStateB1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UBED_StateNode_Reroute> BED_StateNode_Reroute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UBED_StateNode_Initial> BED_StateNode_Initial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABGP_PlayerControllerB1> BGP_PlayerControllerB1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TSubclassOf<UBPS_PlayerControllerDataCompB1> BPS_PlayerControllerDataCompB1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UBUS_AttackFeedbackComp> BUS_AttackFeedbackComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TSubclassOf<UBUI_Button> BUI_Button;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UBUS_MovePhysicsTransformCompImpl> BUS_MovePhysicsTransformCompImpl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UBUS_SkillSequenceComp> BUS_SkillSequenceComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UBUS_PlayerCameraSystem> BUS_PlayerCameraSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UBGWDataAsset_SweepCheckDebugCollisionInfoConfig> BGWDataAsset_SweepCheckDebugCollisionInfoConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UBUS_PlayerCameraCompUObj> BUS_PlayerCameraCompUObj;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UBANS_GSNvFlow> BANS_GSNvFlow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UBANS_GSTrail> BANS_GSTrail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UBGWDataAsset_PerformerConfig> BGWDataAsset_PerformerConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ADispLibDispWorld> DispLibDispWorld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABGUPerformerActor> BGUPerformerActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UBED_QuestNode_Start> BED_QuestNode_Start;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ACLSManager> CLSManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UBED_BehaviorNode_GameDataCounter> BED_BehaviorNode_GameDataCounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABGURebirthPointBase> BGURebirthPointBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AB1X2_DispWorld> B1X2_DispWorld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UBUAnimShadowInstanceBase> BUAnimShadowInstanceBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    RebirthType RebirthType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIKRigBoneDefinition IKRigBoneDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEffectInstReq FEffectInstReq;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    MoveDirectionFive MoveDirectionFive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    MoveDirection MoveDirection;
    
public:
    ABGU_TempExportForDS(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReceiveBeginPlay();
    
};

