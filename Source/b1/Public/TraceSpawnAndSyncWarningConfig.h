#pragma once
#include "CoreMinimal.h"
#include "ESortType.h"
#include "TraceSpawnAndSyncWarningConfig.generated.h"

USTRUCT(BlueprintType)
struct FTraceSpawnAndSyncWarningConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESortType SpawnAndSyncSortType;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, double> TraceSpawnAndSyncWarningInfo;
    
    B1_API FTraceSpawnAndSyncWarningConfig();
};

