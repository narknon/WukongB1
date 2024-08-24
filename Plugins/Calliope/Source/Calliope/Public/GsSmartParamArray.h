#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GsSmartParamArray.generated.h"

USTRUCT(BlueprintType)
struct CALLIOPE_API FGsSmartParamArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGuid> ConfigGuides;
    
    FGsSmartParamArray();
};

