#pragma once
#include "CoreMinimal.h"
#include "BGWDataAsset.h"
#include "FSCDCollisionInfo.h"
#include "BGWDataAsset_SweepCheckDebugCollisionInfoConfig.generated.h"

UCLASS(Blueprintable)
class UBGWDataAsset_SweepCheckDebugCollisionInfoConfig : public UBGWDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFSCDCollisionInfo SCDCollisionInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFSCDCollisionInfo HitUnitSCDCollisionInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFSCDCollisionInfo HitBulletSCDCollisionInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFSCDCollisionInfo HitSceneItemSCDCollisionInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFSCDCollisionInfo HitWorldItemSCDCollisionInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFSCDCollisionInfo AWDCollisionInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFSCDCollisionInfo HitUnitAWDCollisionInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFSCDCollisionInfo HitSceneItemAWDCollisionInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFSCDCollisionInfo HitWorldItemAWDCollisionInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFSCDCollisionInfo HitBulletAWDCollisionInfo;
    
    UBGWDataAsset_SweepCheckDebugCollisionInfoConfig();

};

