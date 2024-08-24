#pragma once
#include "CoreMinimal.h"
#include "OnAkCompAutoDestroyedDelegate.generated.h"

class UAkComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAkCompAutoDestroyed, UAkComponent*, AkComp);

