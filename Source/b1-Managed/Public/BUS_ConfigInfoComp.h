#pragma once
#include "CoreMinimal.h"
#include "ActorAttachConfig.h"
#include "ActorEditCompBase.h"
#include "BoneUseForDispMap.h"
#include "CircusConfig.h"
#include "DispInteractSolverConfig.h"
#include "FGSCameraAutoLockSetting.h"
#include "FGSMeleeAutoLockSetting.h"
#include "InteractInfoTemplateType.h"
#include "NeutralAnimalConfig.h"
#include "UnitAIDesc.h"
#include "UnitCDesc.h"
#include "UnitCompFlagConfig.h"
#include "UnitGuidData.h"
#include "UnitPhysicsDesc.h"
#include "BUS_ConfigInfoComp.generated.h"

class UBGWDataAsset_SpecialBoneConfig;
class UBGWDataAsset_TROConfig;
class UBGWDataAsset_WaterSplashMapping;
class UBehaviorTree;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBUS_ConfigInfoComp : public UActorEditCompBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUnitCDesc UnitCDesc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUnitAIDesc UnitAIDesc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUnitPhysicsDesc UnitPhysicsDesc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUnitGuidData UnitFixedGuid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBehaviorTree* UnitBehaviorTree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDispInteractSolverConfig DispInteractSolverConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FBoneUseForDispMap> DispInteractBoneMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBGWDataAsset_TROConfig* TROConfigOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBGWDataAsset_SpecialBoneConfig* SpecialBoneConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> DestroyProjectileWhenDead;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpotLightRotationLagSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActorAttachConfig AttachConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFGSCameraAutoLockSetting GSCameraAutoLockSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFGSMeleeAutoLockSetting NormalMeleeAutoLockSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFGSMeleeAutoLockSetting G4MeleeAutoLockSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DodgeInputFixLine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GridSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUnitCompFlagConfig FlagConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FallingCheckThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCircusConfig CircusConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    InteractInfoTemplateType _InteractInfoTemplateType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNeutralAnimalConfig NeutralAnimalConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBGWDataAsset_WaterSplashMapping* WaterSplashConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDisableDataConvert: 1;
    
    UBUS_ConfigInfoComp(const FObjectInitializer& ObjectInitializer);

};

