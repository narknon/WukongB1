#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "JavascriptSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Engine)
class V8_API UJavascriptSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString V8Flags;
    
    UJavascriptSettings();

};

