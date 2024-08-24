#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GsSmartParam.generated.h"

USTRUCT(BlueprintType)
struct CALLIOPE_API FGsSmartParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid ConfigGuid;
    
    FGsSmartParam();
};

