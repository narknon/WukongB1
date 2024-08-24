#include "BUS_ProjectileConfigInfoComp.h"

UBUS_ProjectileConfigInfoComp::UBUS_ProjectileConfigInfoComp(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CheckShapeType = ProjectileCheckShapeType::DefaultShape;
    this->SpecificFlags = 0;
    this->Interact_Start_SphereRadius = 0.00f;
    this->Interact_End_SphereRadius = 0.00f;
    this->WindBrokenAudio = NULL;
    this->TriggerDist_WindBroken = 0.00f;
    this->bEnableDebug_WindBrokenAudio = false;
    this->DonutAudio = NULL;
    this->DonutAudioLocationType = DonutBulletAudioLocationType::None;
    this->DonutAudioStopMode = AkEventStopMode::Auto;
    this->DonutAudioStopTimeMs = 0;
    this->DonutAudioFadeOutTimeMs = 0;
    this->DonutAudioCurveInterpolation = AkCurveInterpolationCS::Log3;
    this->bEnable = false;
    this->TraceDelay = 0.00f;
    this->TraceLength = 0.00f;
    this->Size = 0.00f;
    this->SampleCollectionProtectTime = 0.00f;
    this->OverrideSurfaceType = SceneItemSurfaceType::DefaultSurface;
    this->OverrideSurfacePersistTime = 0.00f;
    this->bDrawDebug = false;
    this->DebugDrawOffset = 0.00f;
    this->NeedCheckWorldStatic = true;
    this->SweepCheckChannel = ECC_GameTraceChannel1;
    this->CheckCompProfileName_Bullet = Type_CheckCompProfileName_Bullet::NormalBullet;
    this->bEnableAttackWarning = true;
    this->AttackWarningExtendSize = 0.00f;
    this->bEnableDebug = false;
    this->bHitChrAttach = false;
    this->HitChrAttachTime = 0.00f;
    this->bHitItemAttach = false;
    this->HitItemAttachTime = 0.00f;
    this->AttachOffset = 0.00f;
    this->MPC = NULL;
    this->bDrawDebug_Laser = false;
    this->AkEvent_LaserEnd = NULL;
    this->FadeOut_AkEvent_LaserEnd = 500;
    this->AkEvent_LaserHitItem = NULL;
    this->CheckCompProfileName_MagicField = Type_CheckCompProfileName_MagicField::NormalMagicField;
    this->MagicFieldOverlapType = MagicFieldOverlapType::Normal;
    this->bDebug = false;
    this->bCanHandleAvoidance = false;
    this->bUseSoftEdge = false;
    this->BornEffectDelayTime = 0.00f;
    this->BornAttackWarningTime = 0.00f;
    this->bAttackWarningTriggerPreciseDodge = false;
    this->bPreciseDodgeFilterTeammate = true;
    this->HitDestructibleStrengthLevel = EGSHitDestructibleStrengthLevel::None;
    this->HitDestructibleDirectionType = EGSHitDestructibleDirection::DestructibleDirection;
    this->DirectionUsage = MagicFieldDirectionUsage::None;
    this->DirectionType = MagicFieldDirectionType::None;
    this->DirectionTypeDetail = MagicFieldDirectionTypeDetail::Positive;
    this->bEnableShelterRT = false;
    this->bEnableGlobalFX = false;
    this->bForceUseProjectileMovementComp = false;
    this->bNotify_SpawnFinished = false;
}


