#pragma once
#include "CoreMinimal.h"
#include "GSOnAKBStateBeginDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FGSOnAKBStateBegin, FName, BeginStateName, FName, EndStateName, bool, IsFromForceSetStateImmediately);

