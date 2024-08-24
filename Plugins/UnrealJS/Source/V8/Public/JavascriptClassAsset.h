#pragma once
#include "CoreMinimal.h"
#include "JavascriptClassAsset.generated.h"

USTRUCT(BlueprintType)
struct V8_API FJavascriptClassAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* Class;
    
    FJavascriptClassAsset();
};

