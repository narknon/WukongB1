#pragma once
#include "CoreMinimal.h"
#include "JavascriptStyleSet.generated.h"

USTRUCT(BlueprintType)
struct FJavascriptStyleSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StyleSetName;
    
    JAVASCRIPTUMG_API FJavascriptStyleSet();
};

