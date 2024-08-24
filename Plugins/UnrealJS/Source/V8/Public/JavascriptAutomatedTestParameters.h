#pragma once
#include "CoreMinimal.h"
#include "JavascriptAutomatedTestInstance.h"
#include "JavascriptAutomatedTestParameters.generated.h"

USTRUCT(BlueprintType)
struct FJavascriptAutomatedTestParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TestFunctionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FJavascriptAutomatedTestInstance Tester;
    
    V8_API FJavascriptAutomatedTestParameters();
};

