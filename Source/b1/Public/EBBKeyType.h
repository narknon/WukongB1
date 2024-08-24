#pragma once
#include "CoreMinimal.h"
#include "EBBKeyType.generated.h"

UENUM(BlueprintType)
enum class EBBKeyType : uint8 {
    BOOL_TYPE,
    CLASS_TYPE,
    ENUM_TYPE,
    FLOAT_TYPE,
    INT_TYPE,
    NAME_TYPE,
    NATIVE_ENUM_TYPE,
    OBJECT_TYPE,
    ROTATOR_TYPE,
    STRING_TYPE,
    VECTOR_TYPE,
};

