#pragma once
#include "CoreMinimal.h"
#include "Components/RichTextBlockDecorator.h"
#include "JavascriptHyperlinkSignatureDelegate.h"
#include "JavascriptRichTextBlockHyperlinkDecorator.generated.h"

UCLASS(Blueprintable)
class JAVASCRIPTUMG_API UJavascriptRichTextBlockHyperlinkDecorator : public URichTextBlockDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString HyperlinkId;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FJavascriptHyperlinkSignature OnClick;
    
    UJavascriptRichTextBlockHyperlinkDecorator();

    UFUNCTION(BlueprintCallable)
    FString GetMetaData(const FString& Key);
    
};

