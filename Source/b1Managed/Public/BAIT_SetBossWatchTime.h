#pragma once
#include "CoreMinimal.h"
#include "BAIT_Base.h"
#include "BAIT_SetBossWatchTime.generated.h"

UCLASS(Blueprintable)
class UBAIT_SetBossWatchTime : public UBAIT_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WatchTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEnableDebugLog: 1;
    
    UBAIT_SetBossWatchTime();

};

