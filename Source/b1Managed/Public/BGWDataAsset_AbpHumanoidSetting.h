#pragma once
#include "CoreMinimal.h"
#include "BGWDataAsset.h"
#include "AnimHumanoidSetting_AdvancedMonsterLocomotion.h"
#include "AnimHumanoidSetting_AimOffset.h"
#include "AnimHumanoidSetting_BodyBlend.h"
#include "AnimHumanoidSetting_CloudLocomotion.h"
#include "AnimHumanoidSetting_Common.h"
#include "AnimHumanoidSetting_DingShen.h"
#include "AnimHumanoidSetting_FlyControl.h"
#include "AnimHumanoidSetting_FootIK.h"
#include "AnimHumanoidSetting_GlideMove.h"
#include "AnimHumanoidSetting_Jump.h"
#include "AnimHumanoidSetting_MonsterLocomotion.h"
#include "AnimHumanoidSetting_MotionMatching.h"
#include "AnimHumanoidSetting_ParkourMove.h"
#include "AnimHumanoidSetting_Patrol.h"
#include "AnimHumanoidSetting_PlayerLocomotion.h"
#include "AnimHumanoidSetting_QuadrupedLocomotion.h"
#include "AnimHumanoidSetting_Simple4Dir.h"
#include "AnimHumanoidSetting_SpecialAdditive.h"
#include "AnimHumanoidSetting_SpineIK.h"
#include "AnimHumanoidSetting_StriderMove.h"
#include "AnimWheelSetting_WheelMove.h"
#include "BGWDataAsset_AbpHumanoidSetting.generated.h"

UCLASS(Blueprintable)
class UBGWDataAsset_AbpHumanoidSetting : public UBGWDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimHumanoidSetting_Common CommonSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimHumanoidSetting_FootIK FootIKSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimHumanoidSetting_MotionMatching MotionMatchingSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimHumanoidSetting_Simple4Dir Simple4DirSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimHumanoidSetting_PlayerLocomotion PlayerLocomotionSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimHumanoidSetting_MonsterLocomotion MonsterLocomotionSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimHumanoidSetting_AdvancedMonsterLocomotion AdvancedMonsterLocomotionSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimHumanoidSetting_FlyControl FlyControlSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimHumanoidSetting_AimOffset AimOffsetSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimHumanoidSetting_SpineIK SpineIKSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimHumanoidSetting_DingShen DingShenSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimHumanoidSetting_Jump JumpSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimHumanoidSetting_Patrol PatrolSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimHumanoidSetting_GlideMove GlideMoveSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimHumanoidSetting_ParkourMove ParkourMoveSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimHumanoidSetting_BodyBlend BodyBlendSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimHumanoidSetting_CloudLocomotion CloudLocomotionSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimHumanoidSetting_SpecialAdditive SpecialAdditiveSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimWheelSetting_WheelMove WheelMoveSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimHumanoidSetting_StriderMove StriderMoveSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimHumanoidSetting_QuadrupedLocomotion QuadrupedLocomotionSetting;
    
    UBGWDataAsset_AbpHumanoidSetting();

};

