#pragma once
#include "CoreMinimal.h"
#include "EPCGMetadataTypesConstantStructStringMode.generated.h"

UENUM()
enum class EPCGMetadataTypesConstantStructStringMode : int32 {
    String,
    SoftObjectPath,
    SoftClassPath,
};

