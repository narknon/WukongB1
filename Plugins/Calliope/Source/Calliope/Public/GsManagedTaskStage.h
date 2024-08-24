#pragma once
#include "CoreMinimal.h"
#include "GsManagedParamBase.h"
#include "GsManagedTaskStage.generated.h"

USTRUCT(BlueprintType)
struct CALLIOPE_API FGsManagedTaskStage : public FGsManagedParamBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TaskStage;
    
    FGsManagedTaskStage();
};

