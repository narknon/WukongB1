#pragma once
#include "CoreMinimal.h"
#include "EPCGAttachOptions.generated.h"

UENUM()
enum class EPCGAttachOptions : uint32 {
    NotAttached,
    Attached,
    InFolder,
};

