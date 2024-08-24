#pragma once
#include "CoreMinimal.h"
#include "GameInstanceSystemBaseUObj.h"
#include "BGW_PreloadAssetMgr.generated.h"

class UAsyncLoadAssetHolder;
class UBGWAISkillScoreConfigDataAsset;
class UBGWBHLItemTmpDataAsset;
class UBGWCricketBattleDataAsset;
class UBGWDataAsset_ABSPosToUVConfig;
class UBGWDataAsset_AIHatredConfig;
class UBGWDataAsset_AnimationSyncStateConfig;
class UBGWDataAsset_B1DBC;
class UBGWDataAsset_BattleFieldPerformanceOptConfig;
class UBGWDataAsset_BattleSCConfig;
class UBGWDataAsset_BulletSmartSelectTargetConfig;
class UBGWDataAsset_CloudMoveConfig;
class UBGWDataAsset_CoinDropFXNumConfig;
class UBGWDataAsset_DamageNumConfig;
class UBGWDataAsset_DestructibleImpulseConfig;
class UBGWDataAsset_EnvironmentMaskGlobalConfig;
class UBGWDataAsset_GameConfig;
class UBGWDataAsset_HitAudioPreloadList;
class UBGWDataAsset_LevelInfo;
class UBGWDataAsset_LevelSequenceConfig;
class UBGWDataAsset_LocalFluid2DConfig;
class UBGWDataAsset_MatLayerFunctionMappingConfig;
class UBGWDataAsset_ObservationModeConfig;
class UBGWDataAsset_TROConfig;
class UBGWDemo820ConfigDataAsset;
class UBGWEquipPreviewConfigDataAsset;
class UBGWFallDyingConfigDataAsset;
class UBGWHatredConfigDataAsset;
class UBGWMapUIConfigDataAsset;
class UBGWMonsterManualConfigDataAsset;
class UBGWTransPreviewConfigDataAsset;
class UBGWUIConfigDataAsset;
class UBGW_DispLibGameDBDataAsset;
class UCurveFloat;
class UMaterialParameterCollection;

UCLASS(Blueprintable)
class UBGW_PreloadAssetMgr : public UGameInstanceSystemBaseUObj {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBGWDataAsset_BattleSCConfig* BattleSCConfigDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBGWHatredConfigDataAsset* HatredConfigDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBGWUIConfigDataAsset* UIConfigDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBGWMapUIConfigDataAsset* MapConfigDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBGWFallDyingConfigDataAsset* FallDyingConfigDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBGWDemo820ConfigDataAsset* Demo820ConfigDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBGWCricketBattleDataAsset* CricketBattleDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBGWEquipPreviewConfigDataAsset* EquipPreviewConfigDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBGWTransPreviewConfigDataAsset* TransPreviewConfigDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBGWBHLItemTmpDataAsset* BHLItemTmpDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* MPCStickProg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBGWMonsterManualConfigDataAsset* MonsterManualConfigDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBGWDataAsset_ObservationModeConfig* ObservationModeConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBGWDataAsset_ABSPosToUVConfig* ABSPosToUVConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBGWDataAsset_DamageNumConfig* DamageNumConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBGWDataAsset_GameConfig* GameConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBGWDataAsset_LevelSequenceConfig* LevelSequenceConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBGWAISkillScoreConfigDataAsset* AISkillScoreConfigDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBGWDataAsset_AIHatredConfig* AIHatredConfigDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBGWDataAsset_CoinDropFXNumConfig* CoinDropFXNumConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBGW_DispLibGameDBDataAsset* DA_B1_DispLibGameDB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBGWDataAsset_LocalFluid2DConfig* DefaultLocalFluid2DConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBGWDataAsset_DestructibleImpulseConfig* DestructibleImpulseConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBGWDataAsset_B1DBC* UnitDynamicObstacle_DefaultDBC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBGWDataAsset_BattleFieldPerformanceOptConfig* BattleFieldPerformanceOptConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, UBGWDataAsset_MatLayerFunctionMappingConfig*> MatLayerFunctionMappingConfigMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBGWDataAsset_EnvironmentMaskGlobalConfig* EnvironmentMaskGlobalConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBGWDataAsset_AnimationSyncStateConfig* AnimationSyncStateMonster2WukongConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBGWDataAsset_AnimationSyncStateConfig* AnimationSyncStateMonster2MonsterConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* FrozenAccMatCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBGWDataAsset_BulletSmartSelectTargetConfig* BulletSmartSelectTargetConfig;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBGWDataAsset_CloudMoveConfig* _CloudMoveConfig;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBGWDataAsset_LevelInfo* LevelInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBGWDataAsset_HitAudioPreloadList* HitAudioPreloadListConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBGWDataAsset_TROConfig* TROConfig_Small;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBGWDataAsset_TROConfig* TROConfig_Medium;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBGWDataAsset_TROConfig* TROConfig_MediumBig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBGWDataAsset_TROConfig* TROConfig_Big;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBGWDataAsset_TROConfig* TROConfig_Huge;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<int32, UAsyncLoadAssetHolder*> AssetHolderMap;
    
public:
    UBGW_PreloadAssetMgr();

};

