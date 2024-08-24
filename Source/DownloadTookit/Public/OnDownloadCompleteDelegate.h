#pragma once
#include "CoreMinimal.h"
#include "OnDownloadCompleteDelegate.generated.h"

class UDownloadProxy;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnDownloadComplete, UDownloadProxy*, Proxy, bool, bSuccess);

