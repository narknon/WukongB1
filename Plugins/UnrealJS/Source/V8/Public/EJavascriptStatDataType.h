#pragma once
#include "CoreMinimal.h"
#include "EJavascriptStatDataType.generated.h"

UENUM(BlueprintType)
enum class EJavascriptStatDataType : uint8 {
    Invalid,
    ST_None,
    ST_int64,
    ST_double,
    ST_FName,
    ST_Ptr,
};

