#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "SharpActorComponentTickFunction.generated.h"

USTRUCT(BlueprintType)
struct USHARP_API FSharpActorComponentTickFunction : public FActorComponentTickFunction {
    GENERATED_BODY()
public:
    FSharpActorComponentTickFunction();
};

