#pragma once
#include "CoreMinimal.h"
#include "OnDownloadPausedDelegate.generated.h"

class UDownloadProxy;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDownloadPaused, UDownloadProxy*, Proxy);

