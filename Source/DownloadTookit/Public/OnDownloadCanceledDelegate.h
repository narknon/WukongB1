#pragma once
#include "CoreMinimal.h"
#include "OnDownloadCanceledDelegate.generated.h"

class UDownloadProxy;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDownloadCanceled, UDownloadProxy*, Proxy);

