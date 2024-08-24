#pragma once
#include "CoreMinimal.h"
#include "Components/TextBlock.h"
#include "Components/Widget.h"
#include "JavascriptTextBlock.generated.h"

UCLASS(Blueprintable)
class JAVASCRIPTUMG_API UJavascriptTextBlock : public UTextBlock {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText HighlightText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidget::FGetText HighlightTextDelegate;
    
    UJavascriptTextBlock();

    UFUNCTION(BlueprintCallable)
    void SetHighlightText(FText InHighlightText);
    
};

