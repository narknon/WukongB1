#pragma once
#include "CoreMinimal.h"
#include "ConstSharedStruct.h"
#include "SharedStruct.generated.h"

USTRUCT(BlueprintType)
struct STRUCTUTILS_API FSharedStruct : public FConstSharedStruct {
    GENERATED_BODY()
public:
    FSharedStruct();
};

