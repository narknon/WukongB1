#pragma once
#include "CoreMinimal.h"
#include "EPropertyBagPropertyType.generated.h"

UENUM(BlueprintType)
enum class EPropertyBagPropertyType : uint8 {
    None,
    Bool,
    Byte,
    Int32,
    Int64,
    Float,
    Double,
    Name,
    String,
    Text,
    Enum,
    Struct,
    Object,
    SoftObject,
    Class,
    SoftClass,
    Count,
};

