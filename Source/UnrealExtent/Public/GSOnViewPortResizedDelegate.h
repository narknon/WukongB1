#pragma once
#include "CoreMinimal.h"
#include "GSOnViewPortResizedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGSOnViewPortResized, int32, NewWidth, int32, NewHeight);

