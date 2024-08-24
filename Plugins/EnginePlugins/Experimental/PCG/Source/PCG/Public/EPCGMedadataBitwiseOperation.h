#pragma once
#include "CoreMinimal.h"
#include "EPCGMedadataBitwiseOperation.generated.h"

UENUM()
enum class EPCGMedadataBitwiseOperation : uint16 {
    And,
    Not,
    Or,
    Xor,
};

