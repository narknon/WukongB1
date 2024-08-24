#pragma once
#include "CoreMinimal.h"
#include "OnDownloadResumedDelegate.generated.h"

class UDownloadProxy;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDownloadResumed, UDownloadProxy*, Proxy);

