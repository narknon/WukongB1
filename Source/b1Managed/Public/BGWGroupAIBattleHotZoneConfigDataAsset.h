#pragma once
#include "CoreMinimal.h"
#include "BGWDataAsset.h"
#include "GroupAIHotZoneCircleCustomInfo.h"
#include "BGWGroupAIBattleHotZoneConfigDataAsset.generated.h"

UCLASS(Blueprintable)
class UBGWGroupAIBattleHotZoneConfigDataAsset : public UBGWDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BattleCirclePointRingNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BattleCirclePointAngleInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGroupAIHotZoneCircleCustomInfo MeleeAttackCircleCustomInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGroupAIHotZoneCircleCustomInfo ShortBattleCircleCustomInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGroupAIHotZoneCircleCustomInfo RangeAttackCircleCustomInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGroupAIHotZoneCircleCustomInfo MiddleBattleCircleCustomInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGroupAIHotZoneCircleCustomInfo LongBattleCircleCustomInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ShortBattleCircleRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MiddleBattleCircleRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LongBattleCircleRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MeleeAttackHotZoneInnerRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MeleeAttackHotZoneOneSideAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RangeAttackHotZoneOneSideAngle;
    
    UBGWGroupAIBattleHotZoneConfigDataAsset();

};

