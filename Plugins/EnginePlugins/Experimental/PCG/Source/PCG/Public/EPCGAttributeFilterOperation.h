#pragma once
#include "CoreMinimal.h"
#include "EPCGAttributeFilterOperation.generated.h"

UENUM()
enum class EPCGAttributeFilterOperation : int32 {
    KeepSelectedAttributes,
    DeleteSelectedAttributes,
};

