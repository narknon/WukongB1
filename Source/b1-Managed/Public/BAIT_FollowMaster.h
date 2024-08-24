#pragma once
#include "CoreMinimal.h"
#include "BAIT_Base.h"
#include "EAIMoveSpeedType.h"
#include "EBGUMoveAIType.h"
#include "BAIT_FollowMaster.generated.h"

UCLASS(Blueprintable)
class UBAIT_FollowMaster : public UBAIT_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AcceptableRaidus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 IncludeSelfRadius: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 IncludeTargetRadius: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBGUMoveAIType MoveAIType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAIMoveSpeedType SpeedRateType;
    
    UBAIT_FollowMaster();

};

