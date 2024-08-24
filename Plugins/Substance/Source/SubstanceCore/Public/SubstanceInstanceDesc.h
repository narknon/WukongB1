#pragma once
#include "CoreMinimal.h"
#include "SubstanceInputDesc.h"
#include "SubstanceInstanceDesc.generated.h"

USTRUCT(BlueprintType)
struct FSubstanceInstanceDesc {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSubstanceInputDesc> Inputs;
    
    SUBSTANCECORE_API FSubstanceInstanceDesc();
};

