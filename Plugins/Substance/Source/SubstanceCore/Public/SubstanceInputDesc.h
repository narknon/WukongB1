#pragma once
#include "CoreMinimal.h"
#include "ESubstanceInputType.h"
#include "SubstanceInputDesc.generated.h"

USTRUCT(BlueprintType)
struct FSubstanceInputDesc {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ESubstanceInputType> Type;
    
    SUBSTANCECORE_API FSubstanceInputDesc();
};

