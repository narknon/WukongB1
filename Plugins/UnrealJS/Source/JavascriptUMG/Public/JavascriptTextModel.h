#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Styling/SlateTypes.h"
#include "JavascriptSlateTextRun.h"
#include "JavascriptTextModel.generated.h"

UCLASS(Blueprintable)
class JAVASCRIPTUMG_API UJavascriptTextModel : public UObject {
    GENERATED_BODY()
public:
    UJavascriptTextModel();

    UFUNCTION(BlueprintCallable)
    void SetString(const FString& String);
    
    UFUNCTION(BlueprintCallable)
    FString GetString();
    
    UFUNCTION(BlueprintCallable)
    FJavascriptSlateTextRun CreateRun(const FTextBlockStyle& MessageTextStyle, int32 BeginIndex, int32 EndIndex);
    
};

