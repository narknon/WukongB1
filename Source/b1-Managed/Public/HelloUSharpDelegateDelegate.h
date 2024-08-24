#pragma once
#include "CoreMinimal.h"
#include "HelloUSharpDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FHelloUSharpDelegate, uint8, Param1, const FString&, Param2, int32, param3);

