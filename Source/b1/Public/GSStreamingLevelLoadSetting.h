#pragma once
#include "CoreMinimal.h"
#include "GSStreamingLevelLoadSetting.generated.h"

USTRUCT(BlueprintType)
struct B1_API FGSStreamingLevelLoadSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldBeLoaded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldBeVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldBlockOnLoad;
    
    FGSStreamingLevelLoadSetting();
};

