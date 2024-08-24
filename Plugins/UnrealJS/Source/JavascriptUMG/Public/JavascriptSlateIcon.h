#pragma once
#include "CoreMinimal.h"
#include "JavascriptSlateIcon.generated.h"

USTRUCT(BlueprintType)
struct FJavascriptSlateIcon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StyleSetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StyleName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SmallStyleName;
    
    JAVASCRIPTUMG_API FJavascriptSlateIcon();
};

