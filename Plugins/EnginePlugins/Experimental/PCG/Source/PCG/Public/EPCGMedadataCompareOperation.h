#pragma once
#include "CoreMinimal.h"
#include "EPCGMedadataCompareOperation.generated.h"

UENUM()
enum class EPCGMedadataCompareOperation : uint16 {
    Equal,
    NotEqual,
    Greater,
    GreaterOrEqual,
    Less,
    LessOrEqual,
};

