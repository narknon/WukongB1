#pragma once
#include "CoreMinimal.h"
#include "AsyncLineTraceReq.h"
#include "AsyncLineTraceReqArray.generated.h"

USTRUCT(BlueprintType)
struct UNREALEXTENT_API FAsyncLineTraceReqArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAsyncLineTraceReq> ReqArr;
    
    FAsyncLineTraceReqArray();
};

