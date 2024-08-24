#pragma once
#include "CoreMinimal.h"
#include "BGWOnWorldCleanupDelegate.generated.h"

class UWorld;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FBGWOnWorldCleanup, UWorld*, World, bool, bSessionEnded, bool, bCleanupResources);

