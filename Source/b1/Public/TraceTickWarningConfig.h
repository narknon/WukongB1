#pragma once
#include "CoreMinimal.h"
#include "ESortType.h"
#include "TraceTickWarningConfig.generated.h"

USTRUCT(BlueprintType)
struct FTraceTickWarningConfig {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, double> TraceStatWarningInfo;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double EngineLoopAndSlate_TickTimeWarningLineMS;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double StatCacheRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESortType TickSortType;
    
    B1_API FTraceTickWarningConfig();
};

