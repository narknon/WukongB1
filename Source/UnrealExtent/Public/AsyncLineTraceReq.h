#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AsyncLineTraceReq.generated.h"

USTRUCT(BlueprintType)
struct UNREALEXTENT_API FAsyncLineTraceReq {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ReqID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector TraceStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector TraceEnd;
    
    FAsyncLineTraceReq();
};

