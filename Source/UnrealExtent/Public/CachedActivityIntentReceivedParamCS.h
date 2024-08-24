#pragma once
#include "CoreMinimal.h"
#include "CachedActivityIntentReceivedParamCS.generated.h"

USTRUCT(BlueprintType)
struct FCachedActivityIntentReceivedParamCS {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ActivityId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SessionId;
    
    UNREALEXTENT_API FCachedActivityIntentReceivedParamCS();
};

