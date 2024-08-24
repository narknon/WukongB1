#pragma once
#include "CoreMinimal.h"
#include "EJavascriptHttpRequestStatus.generated.h"

UENUM(BlueprintType)
namespace EJavascriptHttpRequestStatus {
    enum Type {
        NotStarted,
        Processing,
        Failed,
        Succeeded,
    };
}

