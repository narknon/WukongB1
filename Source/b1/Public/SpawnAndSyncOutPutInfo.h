#pragma once
#include "CoreMinimal.h"
#include "SpawnAndSyncOutPutInfo.generated.h"

USTRUCT(BlueprintType)
struct FSpawnAndSyncOutPutInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StatName;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double ElapsedTime;
    
    B1_API FSpawnAndSyncOutPutInfo();
};

