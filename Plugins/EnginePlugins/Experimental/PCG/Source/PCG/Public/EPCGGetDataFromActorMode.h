#pragma once
#include "CoreMinimal.h"
#include "EPCGGetDataFromActorMode.generated.h"

UENUM(BlueprintType)
enum class EPCGGetDataFromActorMode : uint8 {
    ParseActorComponents,
    GetSinglePoint,
    GetDataFromProperty,
    GetDataFromPCGComponent,
    GetDataFromPCGComponentOrParseComponents,
};

