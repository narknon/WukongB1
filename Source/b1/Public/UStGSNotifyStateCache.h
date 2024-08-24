#pragma once
#include "CoreMinimal.h"
#include "UStGSNotifyParam.h"
#include "UStGSNotifyStateCache.generated.h"

class UAnimNotifyState_GSBase;

USTRUCT(BlueprintType)
struct FUStGSNotifyStateCache {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUStGSNotifyParam> NotifyParams;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<UAnimNotifyState_GSBase>> NotifyStatePtrs;
    
    B1_API FUStGSNotifyStateCache();
};

