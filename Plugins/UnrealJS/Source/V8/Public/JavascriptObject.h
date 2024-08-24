#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "JavascriptFunction.h"
#include "JavascriptRef.h"
#include "JavascriptObject.generated.h"

UCLASS(Blueprintable)
class V8_API UJavascriptObject : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FJavascriptRef Ref;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FJavascriptFunction Func;
    
    UJavascriptObject();

};

