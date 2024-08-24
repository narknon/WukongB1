#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "AsyncLineTraceSingleResult.generated.h"

USTRUCT(BlueprintType)
struct UNREALEXTENT_API FAsyncLineTraceSingleResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ReqID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHitResult> HitResults;
    
    FAsyncLineTraceSingleResult();
};

