#pragma once
#include "CoreMinimal.h"
#include "EPCGActorFilter.generated.h"

UENUM(BlueprintType)
enum class EPCGActorFilter : uint8 {
    Self,
    Parent,
    Root,
    AllWorldActors,
    Original,
};

