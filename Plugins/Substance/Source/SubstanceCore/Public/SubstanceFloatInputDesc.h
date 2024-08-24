#pragma once
#include "CoreMinimal.h"
#include "SubstanceInputDesc.h"
#include "SubstanceFloatInputDesc.generated.h"

USTRUCT(BlueprintType)
struct FSubstanceFloatInputDesc : public FSubstanceInputDesc {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> Min;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> Max;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> Default;
    
    SUBSTANCECORE_API FSubstanceFloatInputDesc();
};

