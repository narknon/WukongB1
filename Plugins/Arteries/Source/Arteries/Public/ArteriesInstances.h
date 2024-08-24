#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ArteriesInstances.generated.h"

USTRUCT(BlueprintType)
struct FArteriesInstances {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTransform> Transforms;
    
    ARTERIES_API FArteriesInstances();
};

