#pragma once
#include "CoreMinimal.h"
#include "Navigation/PathFollowingComponent.h"
#include "BUE_OnMoveCompleteDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FBUE_OnMoveComplete, int32, RequestID, TEnumAsByte<EPathFollowingResult::Type>, Result);

