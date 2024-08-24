#pragma once
#include "CoreMinimal.h"
#include "GSOnAKBStateEndDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FGSOnAKBStateEnd, FName, BeginStateName, FName, EndStateName, bool, IsFromForceSetStateImmediately);

