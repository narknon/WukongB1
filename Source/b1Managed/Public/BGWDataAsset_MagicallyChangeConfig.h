#pragma once
#include "CoreMinimal.h"
#include "BGWDataAsset.h"
#include "BoneUseForDispMap.h"
#include "MagicallyChangeConfig_TFXConfig.h"
#include "Templates/SubclassOf.h"
#include "UnitWeapon.h"
#include "BGWDataAsset_MagicallyChangeConfig.generated.h"

class ABUTamerActor;
class UAnimInstance;
class UMaterialInterface;
class UPhysicsAsset;
class USkeletalMesh;

UCLASS(Blueprintable)
class UBGWDataAsset_MagicallyChangeConfig : public UBGWDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UnitScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CapsuleHalfHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float capsuleRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* SKMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> Materials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAnimInstance> ABPClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhysicsAsset* PhysicsAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMagicallyChangeConfig_TFXConfig> TFXConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUnitWeapon> Weapons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBoneUseForDispMap> InteractBones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Override_AbnormalDispID_Attacker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Override_AbnormalDispID_Victim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TamerAssetPath;
    
    UBGWDataAsset_MagicallyChangeConfig();

    UFUNCTION(BlueprintCallable)
    void ReadConfigFromUnit(ABUTamerActor* Tamer);
    
};

