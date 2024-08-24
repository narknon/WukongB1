#pragma once
#include "CoreMinimal.h"
#include "EPCGMetadataOperationTarget.generated.h"

UENUM(BlueprintType)
enum class EPCGMetadataOperationTarget : uint8 {
    PropertyToAttribute,
    AttributeToProperty,
    AttributeToAttribute,
};

