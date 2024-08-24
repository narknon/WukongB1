#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "InstancedPropertyBag.h"
#include "PCGOverrideInstancedPropertyBag.generated.h"

USTRUCT(BlueprintType)
struct PCG_API FPCGOverrideInstancedPropertyBag {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInstancedPropertyBag Parameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FGuid> PropertiesIDsOverridden;
    
    FPCGOverrideInstancedPropertyBag();
};

