#pragma once
#include "CoreMinimal.h"
#include "GsManagedParamBase.h"
#include "GsManagedTaskLine.generated.h"

USTRUCT(BlueprintType)
struct CALLIOPE_API FGsManagedTaskLine : public FGsManagedParamBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TaskLineID;
    
    FGsManagedTaskLine();
};

