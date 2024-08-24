#pragma once
#include "CoreMinimal.h"
#include "EGSLevelSetResult.h"
#include "GSSetLevelStateFailedInfo.generated.h"

USTRUCT(BlueprintType)
struct B1_API FGSSetLevelStateFailedInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LevelName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGSLevelSetResult Result;
    
    FGSSetLevelStateFailedInfo();
};

