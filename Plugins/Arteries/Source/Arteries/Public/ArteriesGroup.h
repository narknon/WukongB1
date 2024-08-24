#pragma once
#include "CoreMinimal.h"
#include "ArteriesGroup.generated.h"

USTRUCT(BlueprintType)
struct ARTERIES_API FArteriesGroup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> IDs;
    
    FArteriesGroup();
};

