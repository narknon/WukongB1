#pragma once
#include "CoreMinimal.h"
#include "EPCGFilterByTagOperation.generated.h"

UENUM()
enum class EPCGFilterByTagOperation : int32 {
    KeepTagged,
    RemoveTagged,
};

