#pragma once
#include "CoreMinimal.h"
#include "UStGSHitResult.h"
#include "BUE_BounceCheckDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBUE_BounceCheck, FUStGSHitResult, GSHitResult);

