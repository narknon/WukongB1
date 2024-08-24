#pragma once
#include "CoreMinimal.h"
#include "GsManagedParamBase.h"
#include "GsManagedIdleAMIdx.generated.h"

USTRUCT(BlueprintType)
struct CALLIOPE_API FGsManagedIdleAMIdx : public FGsManagedParamBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 IdleAMIdx;
    
    FGsManagedIdleAMIdx();
};

