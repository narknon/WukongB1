#pragma once
#include "CoreMinimal.h"
#include "EPCGWorldQueryFilterByTag.generated.h"

UENUM()
enum class EPCGWorldQueryFilterByTag : int32 {
    NoTagFilter,
    IncludeTagged,
    ExcludeTagged,
};

