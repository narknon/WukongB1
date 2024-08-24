#pragma once
#include "CoreMinimal.h"
#include "BGWDataAsset.h"
#include "ProjectileBaseStruct.h"
#include "ProjectilePosOffsetStruct.h"
#include "BGWDataAsset_SwitchBulletResetTargetConfig.generated.h"

UCLASS(Blueprintable)
class UBGWDataAsset_SwitchBulletResetTargetConfig : public UBGWDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FProjectileBaseStruct TargetBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FProjectilePosOffsetStruct TargetPosOffsetInfo;
    
    UBGWDataAsset_SwitchBulletResetTargetConfig();

};

