#pragma once
#include "CoreMinimal.h"
#include "BAIT_Base.h"
#include "BAIT_SetBossWatchTimeInRange.generated.h"

UCLASS(Blueprintable)
class UBAIT_SetBossWatchTimeInRange : public UBAIT_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WatchTimeMIN;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WatchTimeMAX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEnableDebugLog: 1;
    
    UBAIT_SetBossWatchTimeInRange();

};

