#pragma once
#include "CoreMinimal.h"
#include "InstancedStruct.h"
#include "InstancedPropertyBag.generated.h"

USTRUCT(BlueprintType)
struct PCG_API FInstancedPropertyBag {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInstancedStruct Value;
    
public:
    FInstancedPropertyBag();
};

