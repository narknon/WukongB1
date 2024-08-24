#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LoadingProgressInfo.generated.h"

USTRUCT(BlueprintType)
struct ASYNCLOADINGSCREEN_API FLoadingProgressInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath ProgressSprite;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoftObjectPath> DetailSprites;
    
    FLoadingProgressInfo();
};

