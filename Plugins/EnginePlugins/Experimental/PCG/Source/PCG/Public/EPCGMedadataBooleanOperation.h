#pragma once
#include "CoreMinimal.h"
#include "EPCGMedadataBooleanOperation.generated.h"

UENUM()
enum class EPCGMedadataBooleanOperation : uint16 {
    And,
    Not,
    Or,
    Xor,
};

