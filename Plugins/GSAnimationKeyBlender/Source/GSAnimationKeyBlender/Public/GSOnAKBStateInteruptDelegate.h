#pragma once
#include "CoreMinimal.h"
#include "GSOnAKBStateInteruptDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FGSOnAKBStateInterupt, FName, BeginStateName, FName, EndStateName, bool, IsFromForceSetStateImmediately);

