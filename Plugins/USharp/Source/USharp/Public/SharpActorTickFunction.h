#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "SharpActorTickFunction.generated.h"

USTRUCT(BlueprintType)
struct USHARP_API FSharpActorTickFunction : public FActorTickFunction {
    GENERATED_BODY()
public:
    FSharpActorTickFunction();
};

template<>
struct TStructOpsTypeTraits<FSharpActorTickFunction> : public TStructOpsTypeTraitsBase2<FSharpActorTickFunction>
{
    enum
    {
        WithCopy = false
    };
};