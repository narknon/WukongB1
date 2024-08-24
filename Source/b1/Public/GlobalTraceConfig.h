#pragma once
#include "CoreMinimal.h"
#include "TraceSpawnAndSyncWarningConfig.h"
#include "TraceTickWarningConfig.h"
#include "GlobalTraceConfig.generated.h"

USTRUCT(BlueprintType)
struct FGlobalTraceConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableTraceing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DefaultStopTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTraceTickWarningConfig TickWarningConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTraceSpawnAndSyncWarningConfig SpawnAndSyncWarningConfig;
    
    B1_API FGlobalTraceConfig();
};

