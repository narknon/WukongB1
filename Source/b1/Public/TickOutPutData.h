#pragma once
#include "CoreMinimal.h"
#include "TickOutPutInfo.h"
#include "TickOutPutData.generated.h"

USTRUCT(BlueprintType)
struct FTickOutPutData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double FrameAverageTickTime;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double FrameMaxTickTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTickOutPutInfo> Datas;
    
    B1_API FTickOutPutData();
};

