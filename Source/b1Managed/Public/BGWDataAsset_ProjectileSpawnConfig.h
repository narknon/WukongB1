#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "BGWDataAsset.h"
#include "ProjectileBaseStruct.h"
#include "ProjectileBornDirOffsetStruct.h"
#include "ProjectileBornDirStruct.h"
#include "ProjectileMulTargetRule.h"
#include "ProjectilePosOffsetStruct.h"
#include "ProjectileSpawnerType.h"
#include "SpawnBulletSpeed.h"
#include "BGWDataAsset_ProjectileSpawnConfig.generated.h"

UCLASS(Blueprintable)
class UBGWDataAsset_ProjectileSpawnConfig : public UBGWDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ProjectileSpawnerType SpawnerType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bNeedHandleStopReq: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> BuffIDList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ProjectileID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ProjectileWave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ProjectileNumInOneWave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FProjectileBaseStruct SpawnBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FProjectilePosOffsetStruct SpawnPosOffsetInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 AttachToSpawnBase: 1;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EAttachmentRule AttachRule_Rot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FProjectileBaseStruct TargetBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FProjectilePosOffsetStruct TargetPosOffsetInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FProjectileBornDirStruct BornDirBaseInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FProjectileBornDirOffsetStruct BornDirOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpawnBulletSpeed BulletFlySpd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpawnBulletSpeed BulletRotSpd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEnableMultiTargetMode: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FProjectileMulTargetRule MutilTargetRule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEnableSpawnBase_NoneTarget: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FProjectileBaseStruct SpawnBase_NoneTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FProjectilePosOffsetStruct SpawnPosOffsetInfo_NoneTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEnableTargetBase_NoneTarget: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FProjectileBaseStruct TargetBase_NoneTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FProjectilePosOffsetStruct TargetPosOffsetInfo_NoneTarget;
    
    UBGWDataAsset_ProjectileSpawnConfig();

    UFUNCTION(BlueprintCallable)
    bool AboutEffectCaster();
    
};

