#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "JavascriptStaticCache.generated.h"

class UJavascriptIsolate;

UCLASS(Blueprintable)
class V8_API UJavascriptStaticCache : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UJavascriptIsolate*> Isolates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bExecuteTestModePIE;
    
    UJavascriptStaticCache();

};

