#pragma once
#include "CoreMinimal.h"
#include "TickOutPutInfo.generated.h"

USTRUCT(BlueprintType)
struct FTickOutPutInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StatName;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double AverageTickTime;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MaxTickTime;
    
    B1_API FTickOutPutInfo();
};

