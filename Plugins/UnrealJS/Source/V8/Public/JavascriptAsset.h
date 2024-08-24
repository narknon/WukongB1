#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "JavascriptAsset.generated.h"

USTRUCT(BlueprintType)
struct V8_API FJavascriptAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath Asset;
    
    FJavascriptAsset();
};

