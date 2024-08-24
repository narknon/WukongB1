#pragma once
#include "CoreMinimal.h"
#include "BGWDataAsset.h"
#include "BulletBeAttackedReactionInfo.h"
#include "BulletSweepReactionInfo.h"
#include "BulletSweepSimpleStateReactionInfo.h"
#include "BGWDataAsset_BulletSweepReactionConfig.generated.h"

UCLASS(Blueprintable)
class UBGWDataAsset_BulletSweepReactionConfig : public UBGWDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 UseBeHitedReactionConfig: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBulletBeAttackedReactionInfo> BulletBeHitedReactionConfigInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 UseSweepBuffReactionConfig: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBulletSweepReactionInfo> BulletSweepBuffReactionConfigInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 UseSweepSimpleStateReactionConfig: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBulletSweepSimpleStateReactionInfo> BulletSweepSimpleStateReactionConfigInfo;
    
    UBGWDataAsset_BulletSweepReactionConfig();

};

